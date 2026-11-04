#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	char *p = s;
	char *l;
	char *c;

	while (*p != '\0')
	{
		l = "aAeEoOtTlL";
		c = "4433007711";
		while (*l != '\0')
		{
			if (*p == *l)
			{
				*p = *c;
			}
			l++;
			c++;
		}
		p++;
	}

	return (s);
}
