#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 10, 15 times
 */
void more_numbers(void)
{
	int c;
	int j;

	for (c = 0; c <= 14; c++)
	{
		for (j = 0; j <= 10; j++)
		_putchar(j + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
