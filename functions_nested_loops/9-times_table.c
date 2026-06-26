#include "main.h"
#include <stdio.h>
/**
 * times_table - Display tables of multiplications
 */
void times_table(void)
{
	int ligne, colonnes, result;

	for (colonnes = 0; colonnes <= 9; colonnes++)
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			if (ligne * colonnes < 10 && colonnes != 0)
			{
				_putchar((ligne * colonnes) / 10 + '0');
				_putchar((ligne * colonnes) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (ligne * colonnes < 10)
			{
				_putchar(ligne * colonnes + '0');
			}
		}
		_putchar('\n');
	}
}
