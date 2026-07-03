#include "main.h"
#include <stdio.h>

/**
 * _isupper - look for uppercase character
 *  @c: character to check
 *
 * Return: & is c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
