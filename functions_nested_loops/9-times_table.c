#include "main.h"
#include <stdio.h>
/**
 * times_table - Display tables of multiplications
 */
void times_table(void)
{
	int ligne;
	int colonnes;

	for (colonnes = 0; colonnes <= 9; colonnes++)
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			if (ligne < 10)
			{
			_putchar((ligne * colonnes) / 10 + '0');
			_putchar((ligne * colonnes) % 10 + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
			_putchar_(ligne * colonnes + '0');
			_putchar(',');
			_putchar(' ');
			}
		}
	}
}
