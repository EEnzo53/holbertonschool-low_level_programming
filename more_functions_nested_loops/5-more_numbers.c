#include "main.h"
/**
 * more_numbers - print number from 0 to 14 ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int boucle;
	int numbers;

	for (boucle = 0; boucle <= 9; boucle++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers <= 9)
			{
				_putchar('0' + numbers);
			}
			if (numbers > 9)
			{
				_putchar('0' + numbers / 10 && '0' + numbers % 10);
			}
		}
		_putchar('\n');
	}
}
