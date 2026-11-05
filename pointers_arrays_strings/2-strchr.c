#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: charactere to check
 *
 * Return: pointer of c or NULL if the character not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
