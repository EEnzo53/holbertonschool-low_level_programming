#include "main.h"
/**
 * print_sign- print sign of number
 * @n: charactere to check
 *
 * Return: 1 if greater than 0, 0 if 0 and -1 if less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
