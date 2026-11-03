#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to return
 * @src: string to copie
 * @n: bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s1 = 0;

	while (s1 < n && src[s1] != '\0')
	{
		dest[s1] = src[s1];
		s1++;
	}
	while (s1 < n)
	{
		dest[s1] = '\0';
		s1++;
	}

	return (dest);
}
