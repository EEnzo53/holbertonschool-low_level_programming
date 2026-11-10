#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements of the array
 * @size: size in bytes of one element
 *
 * Return: pointer to the memory, or NULL if nmemb or size is 0
 * or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
