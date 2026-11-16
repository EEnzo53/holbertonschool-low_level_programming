#include "function_pointers.h"
/**
 * int_index - Searches an array for an element that matches a criterion
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: The function used to test each element
 *
 * Return: The index of the first matching element, or -1 if none is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
