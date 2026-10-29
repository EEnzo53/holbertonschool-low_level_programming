#include "main.h"
/**
 *print_square - Print a square
 * @size: size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int horiz;
	int verti;

	for (verti = 1; verti <= size; verti++)
	{
		for (horiz = 1; horiz <= size; horiz++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
