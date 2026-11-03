#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: strings 1
 * @src: string 2
 *
 * Return: total
 */
char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0')
	{
		dest[s1 + s2] = src[s2];
		s2++;
	}

	return (dest);
}
