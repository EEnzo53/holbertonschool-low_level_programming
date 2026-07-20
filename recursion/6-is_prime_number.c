#include "main.h"

/**
 * _helper - Checks if n is prime using recursion
 * @n: The number to check
 * @i: The divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);
	return (_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_helper(n, 2));
}
