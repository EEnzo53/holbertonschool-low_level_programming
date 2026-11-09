#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Return a pointer to a newly allocated space
 * @str: string to copy
 *
 * Return: NULL if str = NULL, ptr if success
 */
char *_strdup(char *str)
{
	char *ptr = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
