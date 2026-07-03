#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print number 0 to 9
 *
 * @c: valeur de c
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar("%d", c);
	}
	_putchar("\n");
}
