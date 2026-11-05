#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the bytes allowed in the prefix
 *
 * Return: number of bytes in the initial segment of s
 * made only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;
	int trouve;

	while (*s)
	{
		p = accept;
		trouve = 0;
		while (*p)
		{
			if (*p == *s)
				trouve = 1;
			p++;
		}
		if (trouve == 0)
			break;
		n++;
		s++;
	}
	return (n);
}
