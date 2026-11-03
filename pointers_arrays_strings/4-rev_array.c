#include "main.h"
/**
 *reverse_array - reverse the content of an arrays
 * @a: array to revert
 * @n: number of element of the arrays
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int len;
	int temp;

	for (len = 0; len < n / 2; len++)
	{
		temp = a[len];
		a[len] = a[n - 1 - len];
		a[n - 1 - len] = temp;
	}
}
