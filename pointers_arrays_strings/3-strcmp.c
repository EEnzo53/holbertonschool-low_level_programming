#include "main.h"
/**
 * _strcmp - compares 2 string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the difference between the first differing characters, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] != '\0' && s1[len] == s2[len])
	{
		len++;
	}
	if (s1[len] == s2[len])
		return (0);
	return (s1[len] - s2[len]);
}
