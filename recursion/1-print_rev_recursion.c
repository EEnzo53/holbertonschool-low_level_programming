#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string in reverse, followed by a new line.
 * @s: pointer to the string to print.
 */
void _print_rev_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s - 1);
}
