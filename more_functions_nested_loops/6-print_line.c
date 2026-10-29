#include "main.h"
#include <stdlib.h>
/**
 * print_line - print a straight line on terminal
 * @n: lenght of the line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		exit(0);
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
