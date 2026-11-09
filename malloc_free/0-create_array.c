#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars
 * @size: size of the array
 * @c: character to put in the array
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *str = 0;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
