## stack_example:
Alors, walk_stack est appelée pour 0 jusqu'à 3 (récursion) marker est une variable locale qui vit dans walk_stack, dump_frame est appelée à l'aller et au retour, elle affiche les adresses de ses propres variables locales.
la pile grandit vers le bas : l'adresse de marker diminue quand depth augmente:
Sortie 1: [enter] depth=0 ----- &marker=0x7ffc0f6dd6c4
Sortie 2: [enter] depth=1 ----- &marker=0x7ffc0f6dd694
la valeur de marker augmente aussi de 10 en 10 à chaque sortie
local_buf[0] augmente aussi à chaque fois; 1re sortie: local_buf[0]=A, sortie 2: local_buf[0]=B, l'indice reste [0] (la valeurs dans [0] change) alors que [1] est toujours ='\0'.
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

local_int, local_buf et p_local deviennent invalides quand dump_frame fait un return, et pour finir, marker devient invalide quand walk_stack(n) fait son return, avec n qui vaut 3 dans un premier temps, et 0 en dernier

et en gros, pas de problème, le code est good.

## heap_example:

Ensuite, le Heap contient 4 blocs :
  alice (struct, 0x611e986a7420): name -> 0x611e986a7440, age=30
  alice->name (0x611e986a7440): "Alice\0"
  bob (0x611e986a7460): name -> 0x611e986a7480, age=41
  bob->name (0x611e986a7480): "Bob\0"
3 blocs libérés et 1 est alloué (0x611e986a7440).

return de person_new la valeur de p est copiée dans alice, puis p disparaît, person_free_partial(alice), p et alice contiennent la même adresse (0x611e986a7420) name de person_new pointe vers une chaîne littérale ("Alice" ou "Bob") qui n'est ni dans la pile ni dans le heap, et p->name pointe vers une copie dans le heap : ce ne sont pas des alias.

name, age, i, len et p de person_new deviennent invalides quand person_new fait un return (les blocs du heap restent valides).
bob->name (0x611e986a7480) devient invalide quand free(bob->name). Bob (struct, 0x611e986a7460) devient invalide quand free(bob).
alice (struct, 0x611e986a7420) devient invalide dès free(p) dans person_free_partial.
alice->name (0x611e986a7440) n'est jamais libéré : il reste alloué jusqu'à la fin du programme, mais devient inaccessible dès free(p) dans person_free_partial, car le seul pointeur vers lui était dans la struct libérée. Il y a une fuite de mémoire (memory leaks)
p de person_free_partial devient invalide quand person_free_partial fait un return.
alice et bob (pointeurs de main) deviennent invalides quand main fait un return.

en gros, plusieurs problêmes surtout de fuite de mémoire, il manque pas mal de free.