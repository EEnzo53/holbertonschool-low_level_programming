#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings, taking at most n bytes from s2
 * @s1: first string (may be NULL)
 * @s2: second string (may be NULL)
 * @n: maximum number of bytes to take from s2
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + n] = '\0';
	return (result);
}
