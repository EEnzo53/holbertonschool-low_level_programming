#include "main.h"
/**
 *puts2 - Print other character
 *@str: string to print
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;

		if (str[len] != '\0')
			len++;
	}
	_putchar('\n');
}
