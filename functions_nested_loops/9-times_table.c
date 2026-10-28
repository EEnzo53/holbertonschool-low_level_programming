#include "main.h"
/**
 * times_table - print multiplications table
 *
 * Return : Never
 */
void times_table(void)
{
	int col;
	int ver;

	for (col = 0; col <= 9; col++)
	{
		for (ver = 0; ver <= 9; ver++)
		{
			if (ver != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (ver * col < 10)
				{
				_putchar(' ');
				}
			}
			if (ver * col < 10)
			{
				_putchar('0' + ver * col);
			}
			else
			{
				_putchar('0' + ver * col / 10);
				_putchar('0' + ver * col % 10);
			}
		}
		_putchar('\n');
	}
}
