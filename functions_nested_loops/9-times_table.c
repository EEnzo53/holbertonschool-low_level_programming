#include "main.h"
#include <stdio.h>
/**
 * times_table - Display tables of multiplications
 */
void times_table(void)
{
	int ligne;
	int colonnes;

	for (ligne = '0'; ligne <= '9'; ligne++)
	{
		for (colonnes = '0'; colonnes <= '9'; colonnes++)
		{
			_putchar(ligne * colonnes + 0);
			_putchar(',');
			_putchar(' ');
		}
	}
}
