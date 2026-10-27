# C - Hello, World

Dossier du projet Holberton sur les premiers pas en langage C.

## C'est quoi le C ?

Le C est un langage de programmation **compilé** : le code doit être traduit en langage machine par un **compilateur** (`gcc`) avant d'être exécuté.

## Le premier programme

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World\n");
    return (0);
}
```

- `#include <stdio.h>` : ajoute les fonctions d'affichage (`printf`, `puts`)
- `main` : la fonction où le programme commence
- `printf` : affiche du texte
- `\n` : retour à la ligne
- `return (0)` : le programme s'est bien terminé

## Les étapes de la compilation

fichier.c → préprocesseur → compilateur → assembleur → exécutable

1. **Préprocesseur** : traite les lignes qui commencent par `#`
2. **Compilateur** : transforme le C en assembleur
3. **Assembleur** : transforme l'assembleur en code machine (`.o`)
4. **Éditeur de liens** : crée l'exécutable final

## Commandes utiles

- `gcc fichier.c -o nom` : compile
- `./nom` : lance le programme
- `echo $?` : affiche le code de retour
- `man gcc` : aide de gcc

## Fonctions

- `puts` : affiche du texte avec un retour à la ligne automatique
- `printf` : affiche du texte formaté, sans retour à la ligne automatique
- `sizeof` : donne la taille d'un type en octets
