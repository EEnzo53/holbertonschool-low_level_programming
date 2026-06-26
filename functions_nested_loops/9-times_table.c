#include "main.h"

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
			result = (ligne * colonnes);
			if (colonnes * 9 >= 10)
			{
				if (result >= 10)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				if (ligne != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(result + '0');
				if (ligne != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}