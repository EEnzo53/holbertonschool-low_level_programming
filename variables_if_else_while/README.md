# README - Variables, If/Else et While en C

Ce document explique les bases des variables, des conditions et des boucles en langage C.

---

## 1. Les variables

Une variable est un espace en memoire qui permet de stocker une valeur.

### Declaration

En C, une variable doit etre declaree avec un type.

```c
int age;
float taille;
char lettre;
Initialisation

On peut donner une valeur directement :

int age = 20;
float taille = 1.75;
char lettre = 'A';
Types courants
int : nombres entiers
float : nombres a virgule
char : un seul caractere
2. If / Else

Les conditions permettent d'executer du code seulement si une condition est vraie.

Structure if
if (age >= 18)
{
    printf("Majeur\n");
}
Structure if / else
if (age >= 18)
{
    printf("Majeur\n");
}
else
{
    printf("Mineur\n");
}
if / else if / else
if (age < 18)
{
    printf("Mineur\n");
}
else if (age < 65)
{
    printf("Adulte\n");
}
else
{
    printf("Senior\n");
}
3. While

La boucle while permet de repeter une instruction tant qu'une condition est vraie.

Structure de base
int i = 0;

while (i < 5)
{
    printf("%d\n", i);
    i++;
}
Explication
La condition est verifiee avant chaque iteration
Si elle est vraie, le bloc s'execute
Si elle est fausse, la boucle s'arrete
Resume
Variables : stockent des valeurs
If / else : gerent les conditions
While : repete des instructions tant qu'une condition est vraie
