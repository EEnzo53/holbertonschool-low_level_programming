#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (src[i] != '\0')
	{

		if (i < n)
		{
		dest[len] = src[i];
		len++;
		i++;
		}
	}
	dest[len] = '\0';

	return (dest);
}
