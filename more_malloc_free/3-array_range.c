#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: first value (included)
 * @max: last value (included)
 *
 * Return: pointer to the new array, or NULL if min > max
 * or if malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
