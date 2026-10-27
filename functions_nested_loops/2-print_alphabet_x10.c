#include "main.h"
/**
 * print_alphabet_x10 - Display the alphabet ten times using only _putchar
 *
 * Return: No returns
 */
void print_alphabet_x10(void)
{
	int bcl;
	int alph;

	for (bcl = 0; bcl <= 9; bcl++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
