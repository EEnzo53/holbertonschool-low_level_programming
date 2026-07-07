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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	result = malloc(strlen(s1) + n + 1);
		if (result == NULL)
		{
			return (NULL);
		}

	strcpy(result, s1);

	for (i = 0; i < n; i++)
	{
		result[strlen(s1) + i] = s2[i];
	}
	result[strlen(s1) + n] = '\0';
	return (result);
}
