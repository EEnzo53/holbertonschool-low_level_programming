#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory with malloc
 * @b:
 *
 * Return: pointers to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/*
	* initialize variable
	*/
	char *ptr;
	/*
	* Allocates memory with malloc
	*/
	ptr = malloc(sizeof(char) * (b * 1));
	/*
	* look if malloc success or not, if not, return 98
	*/
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	/*
	* Return a pointer to allocated memory
	*/
	return (ptr);
}
