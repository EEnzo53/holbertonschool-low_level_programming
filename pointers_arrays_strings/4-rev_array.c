#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array of integers.
 * @n: number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	i = 0;
	j = n - 1;

	while (i < j)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
	}
}
