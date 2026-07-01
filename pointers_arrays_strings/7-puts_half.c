#include "main.h"
/**
 * puts_half - print second half of string
 *
 * @str: string to display half
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;

	while (str[len] != '\0')
		len++;

	i = (len + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
