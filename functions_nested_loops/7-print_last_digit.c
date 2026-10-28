#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @last: digit to check
 *
 * Return: last
 */
int print_last_digit(int last)
{
	last = last % 10;
	if (last < 0)
	{
		last = last * -1;
	}

	_putchar('0' + last);
	return (last);
}

