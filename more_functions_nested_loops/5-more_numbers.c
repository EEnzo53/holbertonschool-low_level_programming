#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
	int c;
	int j;

	for (c = 0; c <= 10; c++)
	{
		for (j = 0; j <= 14; j++)
		_putchar(j + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
