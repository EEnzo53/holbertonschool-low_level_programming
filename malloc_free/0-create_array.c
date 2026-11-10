#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arrays of char and initializes it with a char
 * @size: number of char in the array
 * @c: Char to put in the array
 *
 * Return: NULL if size = 0 or if malloc failed,
 *  otherwise return a pointers to the arrays
 */
char *create_array(unsigned int size, char c)
{
	/*
	 * 1.create a char *ptr an unsigned int
	*/
	unsigned int compt = 0;
	char *ptr;

	/*
	*2.Return NULL if size = 0
	*/
	if (size == 0)
		return (NULL);

	/*
	*3.Initialize memory space with malloc
	*/
	ptr = malloc(sizeof(char) * (size));

	/*
	*3.return NULL if malloc fails
	*/
	if (ptr == NULL)
		return (NULL);

	/*
	*4.initialize c in ptr[i] 'size' time
	*/
	while (compt < size)
	{
		ptr[compt] = c;
		compt++;

	}
	/*
	*5.Return a pointer to the array
	*/
	return (ptr);
}
