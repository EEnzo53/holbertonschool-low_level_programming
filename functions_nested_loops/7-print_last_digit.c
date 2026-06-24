#include "main.h"
/**
 * print_last_digit - Display the absolute value of an integer
 * @n: integer to compute
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
int n
{
	int last;
	last = n % 10;
	_putschar(last);
	return(last);
}
