#include <stdio.h>
/**
 * sum_to_n - computes the sum of all integers from 1 to n
 * @n: number to reach
 *
 * Return: sum of values from 1 to n, or 0 if n is less than 1
*/

int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;

	return (sum);
}

/**
 * main - tests the sum_to_n function
 *
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
