#include <stdio.h>
#include "main.h"
/**
 * print_sign - Checs for alphabetic character
 * @n: character to check
 *
 * Return: 1 if is greater than 0, -1 if is less than 0, otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
