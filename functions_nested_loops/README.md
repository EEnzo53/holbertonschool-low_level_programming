# C - Functions, Nested Loops

## Description

Ce projet couvre les fonctions en C et les boucles imbriquees.
On apprend a decouper un programme en fonctions reutilisables et a manipuler des boucles a plusieurs niveaux.

## Concepts abordes

- Declaration et definition d'une fonction
- Prototypes et fichiers header (.h)
- Valeurs de retour et type `void`
- Portee des variables (scope)
- Boucles imbriquees (`while` dans un `while`)

## Requirements

- Ubuntu 20.04 LTS
- Compile avec `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Style Betty obligatoire
- Pas de variables globales
- Maximum 5 fonctions par fichier
- Prototypes dans `main.h`

## Fichiers

| Fichier | Description |
|---|---|
| `main.h` | Prototypes de toutes les fonctions |
| `0-putchar.c` | Affiche un caractere avec `_putchar` |
| `1-alphabet.c` | Affiche l'alphabet en minuscules |
| `2-print_alphabet_x10.c` | Affiche l'alphabet 10 fois |
| `3-islower.c` | Verifie si un char est minuscule |
| `4-isalpha.c` | Verifie si un char est alphabetique |

## Exemple

```c
/*
** addition - additionne deux entiers
** @a: premier entier
** @b: deuxieme entier
** Return: la somme de a et b
*/
int addition(int a, int b)
{
    return (a + b);
}
```

## Auteur

EEnzo53 — Holberton School
