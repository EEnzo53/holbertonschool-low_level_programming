#include "main.h"
/**
 * _memset - Fills memory with a constant bytes
 * @s: pointers to return
 * @b: memory to fills
 * @n: number of octets
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s = b;
		s++;
	}
	return (s);
}
