#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
