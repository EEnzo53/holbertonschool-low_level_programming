# C - Hello, World

Holberton project folder about the first steps in the C language.

## What is C?

C is a **compiled** programming language: the code must be translated into machine language by a **compiler** (`gcc`) before it can be run.

## The first program

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World\n");
    return (0);
}
```

- `#include <stdio.h>`: adds the display functions (`printf`, `puts`)
- `main`: the function where the program starts
- `printf`: prints text
- `\n`: new line
- `return (0)`: the program ended successfully

## The compilation steps

file.c → preprocessor → compiler → assembler → executable

1. **Preprocessor**: handles the lines that start with `#`
2. **Compiler**: turns the C code into assembly
3. **Assembler**: turns the assembly into machine code (`.o`)
4. **Linker**: creates the final executable

## Useful commands

- `gcc file.c -o name`: compiles
- `./name`: runs the program
- `echo $?`: prints the exit status
- `man gcc`: gcc help

## Functions

- `puts`: prints text with an automatic new line
- `printf`: prints formatted text, without an automatic new line
- `sizeof`: gives the size of a type in bytes

## Fonctions

- `puts` : affiche du texte avec un retour à la ligne automatique
- `printf` : affiche du texte formaté, sans retour à la ligne automatique
- `sizeof` : donne la taille d'un type en octets
