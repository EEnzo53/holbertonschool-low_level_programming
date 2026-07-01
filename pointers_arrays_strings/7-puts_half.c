#include "main.h"

void puts_half(char *str)
{
	int i;
	int len;

	len = 0;


	while (str[len] != '\0')
		len++;

	i = (len + 1) / 2;

	while (str[i] != '0')
	{
		_putchar(str[i]);
		i++;
	}

	putchar('\n');
}
