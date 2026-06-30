#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = 78;
	int m = 15;
	int *paprika = &n;

	paprika = &m;
	*paprika = 98;
	paprika = &n;
	*paprika = 94;

	return (0);
}
