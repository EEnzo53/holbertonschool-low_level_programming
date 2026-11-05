#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: bytes allowed
 *
 * Return: a pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
