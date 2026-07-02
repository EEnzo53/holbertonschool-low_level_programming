#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination buffer containing initial string
 * @src: source string to append to dest
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
