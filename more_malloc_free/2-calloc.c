#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of element of the array
 * @size: bytes size
 *
 * Return: a pointer to the memory, NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * nmemb);
	if (ptr == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
