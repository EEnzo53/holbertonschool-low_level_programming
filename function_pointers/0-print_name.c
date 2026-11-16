#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Print a name
 * @name: name to print
 * @f: function to use
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
