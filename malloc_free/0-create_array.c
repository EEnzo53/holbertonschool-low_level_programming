#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it
 *                with a specific char.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * arr);

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		arr[i]++;
	}
	return (arr);
}
