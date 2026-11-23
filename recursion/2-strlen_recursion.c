#include "main.h"
/**
 *_strlen_recursion - print the sum of the string with recursion
 *@s: string to print the sum
 *
 * Return: sum of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
