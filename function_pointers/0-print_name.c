#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: function pointer to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
