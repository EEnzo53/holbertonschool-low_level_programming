#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: integer to compute the absolute value of
 *
 * Return: value
 */
int _abs(int n)
{
	int value = n;

	if (value < 0)
	{
		value = -value;
	}
	return (value);
}
