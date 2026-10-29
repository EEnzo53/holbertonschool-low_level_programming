#include "main.h"
/**
 * _isupper - Checks for uppercase character
 *@c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
