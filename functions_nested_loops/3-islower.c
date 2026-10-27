#include "main.h"
/**
 * _islower- Says if a characters is lowercase or uppercase
 * @c: The character to check.
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
