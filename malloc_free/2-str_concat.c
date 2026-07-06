#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to newly allocated space memory containing concatenated
 * string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *copy;
	int i;
	int j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	copy = malloc(sizeof(char) * (len1 + len2 + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		copy[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		copy[i] = s2[j];

	copy[i] = '\0';

	return (copy);
}
