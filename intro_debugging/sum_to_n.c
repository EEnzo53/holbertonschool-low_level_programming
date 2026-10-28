#include <stdio.h>

/**
 * sum_to_n - Calculate the sum of all integers from 1 through n.
 * @n: The upper bound of the sum.
 *
 * Return: The sum, or 0 if n is less than 1.
 */
int sum_to_n(int n)
{
	int i;
	int sum = 55;

	for (i = 1; i < n; i++)
		sum += i;

	return (n);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
