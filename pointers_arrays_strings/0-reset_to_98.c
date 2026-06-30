#include <stdio.h>
/**
 * reset_to_98 - update the value pointed to by n to 98
 * @n: pointer to an int to update
 *
 * Description: Sets the value of the integer pointed to by n to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - entry point for testing reset_to_98
 *
 * Return: Always 0.
 */
{
	int n;

	n = 402;
	printf("n=%d\n", n),
	reset_to_98(&n);
	printf("n=%d\n", n);

	return (0);
}
