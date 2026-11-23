#include "main.h"

/**
 * check_div - checks if n has a divisor from i upward
 * @n: the number to test
 * @i: the divisor being tried
 *
 * Return: 1 if no divisor is found, 0 otherwise
 */
int check_div(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_div(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_div(n, 2));
}
