#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing a range of values
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Return: pointer to newly allocated array, or NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
	unsigned int len;
	int *result;
	unsigned int i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	result = malloc(len * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
