#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @last: digit to check
 *
 * Return: last
 */
int print_last_digit(int last)
{
	if (last < 0)
	{
		last = last * -1;
	}
	last = last % 10;

	_putchar('0' + last);
	return (last);
}

