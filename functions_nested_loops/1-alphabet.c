#include "main.h"
/**
 * print_alphabet- Display the alphabet using only _putchar
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
