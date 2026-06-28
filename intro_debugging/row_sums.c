#include <stdio.h>

/**
 * row_sum - calculate the sum of a multiplication table row
 * @row: row number
 * @cols: number of columns
 *
 * Return: sum of values in the row
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - calculate the sum of all values in a multiplication table
 * @rows: number of rows
 * @cols: number of columns
 *
 * Return: total sum of all rows
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		int row_total = row_sum(r, cols);
		total += row_total;

	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - entry point for the program
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}