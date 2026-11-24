## stack_example:
walk_stack est appelée pour 0 jusqu'à 3 (récursion) marker est une variable locale qui vit dans walk_stack, dump_frame est appelée à l'aller et au retour, elle affiche les adresses de ses propres variables locales.
la pile grandit vers le bas : l'adresse de marker diminue quand depth augmente:
Sortie 1: [enter] depth=0 ----- &marker=0x7ffc0f6dd6c4
Sortie 2: [enter] depth=1 ----- &marker=0x7ffc0f6dd694
la valeur de marker augmente aussi de 10 en 10 à chaque sortie
local_buf[0] augmente aussi à chaque fois; 1re sortie: local_buf[0]=A, sortie 2: local_buf[0]=B, l'indice reste 0, c'est le contenu de la case qui change; local_buf[1] vaut toujours '\0'.
puis ensuite tout revient dans l'ordre inverse étape par étape
1re sortie:
[enter] depth=0
  &local_int=0x7ffc0f6dd674  p_local=0x7ffc0f6dd674  local_int=100
  local_buf=0x7ffc0f6dd680  local_buf[0]=A
  &marker=0x7ffc0f6dd6c4  marker=0
dernière sortie:
[exit] depth=0
  &local_int=0x7ffc0f6dd674  p_local=0x7ffc0f6dd674  local_int=100
  local_buf=0x7ffc0f6dd680  local_buf[0]=A
  &marker=0x7ffc0f6dd6c4  marker=0
  entre les deux, local_buf[0] est allé jusqu'à D, marker jusqu'à 30, et local_int jusqu'à 103.

le Heap est vide, il n'y a aucun malloc.
Aucun souci en termes d'alias, p_local et &local_int pointent vers le même endroit. local_buf est le nom du tableau et donne l'adresse de local_buf[0]. label lui pointe vers une chaîne littérale qui n'est pas dans la pile.

local_int, local_buf, p_local, label et depth (de dump_frame) deviennent invalides quand dump_frame fait un return, et pour finir, marker devient invalide quand walk_stack(n) fait son return, avec n qui vaut 3 dans un premier temps, et 0 en dernier


## heap_example:
person_new est appelée deux fois (alice puis bob) et fait à chaque appel deux malloc : un pour la struct Person et un pour copier le nom (len + 1 pour '\0'). alice et bob sont des pointeurs dans main (sur la pile) qui pointent vers le heap.
les adresses du heap augmentent à chaque malloc, dans l'ordre des appels :
Sortie 1: alice=0x611e986a7420 ----- name=0x611e986a7440
Sortie 2: bob=0x611e986a7460 ----- name=0x611e986a7480
age vaut 30 pour alice et 41 pour bob, name pointe vers "Alice\0" et "Bob\0".
les free se font dans cet ordre :
  free(bob->name), puis free(bob), puis free(alice) via person_free_partial
  alice->name n'est jamais libéré.

étape par étape:
1er appel, person_new("Alice", 30):
  malloc(16) -> 0x611e986a7420 (struct)
  len = 5, malloc(6) -> 0x611e986a7440 (nom), copie de "Alice\0"
  age=30, return p, la valeur de p est copiée dans alice, puis p disparaît
2e appel, person_new("Bob", 41):
  malloc(16) -> 0x611e986a7460 (struct)
  len = 3, malloc(4) -> 0x611e986a7480 (nom), copie de "Bob\0"
  age=41, return p, la valeur de p est copiée dans bob, puis p disparaît
affichage:
  alice=0x611e986a7420 name=0x611e986a7440 age=30
  bob=0x611e986a7460 name=0x611e986a7480 age=41
libération:
  free(bob->name) : 0x611e986a7480 libéré
  free(bob) : 0x611e986a7460 libéré
  person_free_partial(alice) : 0x611e986a7420 libéré, mais 0x611e986a7440 reste alloué

la Stack contient : alice et bob (main), puis temporairement name, age, i, len et p (person_new, une frame pour alice et une autre pour bob) et p (person_free_partial). Chaque frame disparaît à son return.

le Heap contient 4 blocs :
  alice (struct, 16 octets, 0x611e986a7420): name -> 0x611e986a7440, age=30
  alice->name (6 octets, 0x611e986a7440): "Alice\0"
  bob (struct, 16 octets, 0x611e986a7460): name -> 0x611e986a7480, age=41
  bob->name (4 octets, 0x611e986a7480): "Bob\0"
à la fin, 3 blocs sont libérés et 1 est toujours alloué (0x611e986a7440).

en terme d'alias, au return de person_new la valeur de p est copiée dans alice (pareil pour bob), puis p disparaît. Pendant person_free_partial(alice), p et alice contiennent la même adresse (0x611e986a7420) en même temps Le paramètre name de person_new pointe vers une chaîne littérale ("Alice" ou "Bob") qui n'est ni dans la pile ni dans le heap, et p->name pointe vers une copie dans le heap

name, age, i, len et p de person_new deviennent invalides quand person_new fait un return (les blocs du heap restent valides).
bob->name (0x611e986a7480) devient invalide dès free(bob->name).
bob (struct, 0x611e986a7460) devient invalide dès free(bob).
alice (struct, 0x611e986a7420) devient invalide dès free(p) dans person_free_partial.
alice->name (0x611e986a7440) n'est jamais libéré : il reste alloué jusqu'à la fin du processus, mais devient inaccessible dès free(p) dans person_free_partial, car le seul pointeur vers lui était dans la struct libérée. Ya alors un fuite mémoire
p de person_free_partial devient invalide quand person_free_partial fait un return.
alice et bob (pointeurs de main) deviennent invalides quand main fait un return.