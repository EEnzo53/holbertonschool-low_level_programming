#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of octets
 *
 * Return: c
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *c = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (c);
}
