#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: the chessboard to print
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int col;
	int lig;

	for (lig = 0; lig < 8; lig++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[lig][col]);
		}
		_putchar('\n');
	}
}
