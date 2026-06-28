#include <stdio.h>
/**
 * print_table - print multiplication table from table 1 to table 4
 *
 * Return: Always 0
 */
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
		}
		printf("\n");
	}
	return (0);
}

/* main - display table */

int main(void)
{
	print_table(4);
	return (0);
}
