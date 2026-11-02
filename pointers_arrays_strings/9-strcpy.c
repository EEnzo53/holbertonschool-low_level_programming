#include "main.h"
/**
 * _strcpy - copy a string i guess ?
 * @dest: Return value
 * @src: string to be copied
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != ('\0' + 1))
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
