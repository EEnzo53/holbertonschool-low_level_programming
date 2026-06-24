#include "main.h"
/**
 * print_last_digit - Display the absolute value of an integer
 * @n: integer to compute
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	int last;

	if (last < n)
	{
	_putchar(-last + '0');
	}
	last = n % 10;

	_putchar(last + '0');
	return (last);
}
