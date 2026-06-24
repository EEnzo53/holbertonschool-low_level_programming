#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Displays the alphabet ten times with a prototype
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int f;
	for (f = 0; f <= 9; f++)

	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
}
