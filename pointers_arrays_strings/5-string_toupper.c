#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @n: string to convert
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int len = 0;

	while (n[len] != '\0')
	{
		if (n[len] >= 'a' && n[len] <= 'z')
		{
			n[len] = n[len] - 32;
		}
		len++;
	}

	return (n);
}
