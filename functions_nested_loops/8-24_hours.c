#include "main.h"
/**
 * jack_bauer - print the french horloge from 00:00 to 23:59
 *
 * Return: Never
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		minute = 0;

		while (minute != 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			minute++;
			_putchar('\n');
		}
	}
}
