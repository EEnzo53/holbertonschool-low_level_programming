#include <stdio.h>
/**
 * print_table - print an size x size multiplication table
 * @size: the number of rows and columns of the table (must be > 0)
 *
 * Description: prints the multiplication table from 1 to size
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

/**
 * main - Entry point. Display multiplication table of size 4
 *
 * Return: Always 0
 */
int main(void)
{
	print_table(4);
}
