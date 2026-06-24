#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checs for alphabetic character
 * @c: character to check
 *
 * Return: 1 if is alphabetic character, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a-A' && c <= 'z-Z')
		return (1);
	return (0);
}
