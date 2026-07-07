#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory and exit on failure
 * @b: number of bytes to allocate
 *
 * Allocates memory using malloc. If malloc fails and returns NULL,
 * the function causes the program to exit with status 98. On success
 * it returns a pointer to the allocated memory.
 *
 * Return: pointer to allocated memory (never NULL)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
