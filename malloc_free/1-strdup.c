#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string by allocating new memory
 * @str: the string to duplicate
 *
 * Return: pointer to newly allocated duplicate string, or NULL on failure
 */
char *_strdup(char *str)
{
	int len;
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
