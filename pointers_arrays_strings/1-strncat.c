#include "main.h"
/**
 * _strncat - Add dest in src with a spec charactrs
 *
 * Return: always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while(dest[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		if (len < n)
		{
		dest[len] = src[i];
		len++;
		i++;
		}
	}
	dest[len] = '\0';

	return (dest);
}
