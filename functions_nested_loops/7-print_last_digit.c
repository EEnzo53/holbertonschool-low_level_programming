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

	last = n % 10;

	if (last < 0)
	{
		_putchar(-last + '0');
	}
	else (last > 0)
	{
	_putchar(last + '0');
	}
	return (last);
}
