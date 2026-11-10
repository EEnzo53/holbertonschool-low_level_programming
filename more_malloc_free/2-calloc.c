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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);

	return (ptr);
}
