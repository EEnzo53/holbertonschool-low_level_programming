#include "main.h"
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @n: The string to capitalize.
 *
 * Return: n
 */
char *cap_string(char *n)
{
	int len = 0;

	while (n[len] != '\0')
	{
		if (n[len] >= 'a' && n[len] <= 'z')
		{
			if (len == 0 || n[len - 1] == ' ' || n[len - 1] == '\t' ||
			    n[len - 1] == '\n' || n[len - 1] == ',' ||
			    n[len - 1] == ';' || n[len - 1] == '.' ||
			    n[len - 1] == '!' || n[len - 1] == '?' ||
			    n[len - 1] == '\"' || n[len - 1] == '(' ||
			    n[len - 1] == ')' || n[len - 1] == '{' ||
			    n[len - 1] == '}')
			{
				n[len] = n[len] - ('a' - 'A');
			}
		}
		len++;
	}
	return (n);
}
