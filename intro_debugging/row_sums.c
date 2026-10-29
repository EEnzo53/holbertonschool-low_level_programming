#include <stdio.h>

/**
 * row_sum - Calculates the sum of the columns in a row.
 * @row: row number.
 * @cols: Number of columns in the row.
 *
 * Return: The sum of the column numbers.
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
 * total_sum - Calculates the cumulative sum of all rows.
 * @rows: Number of rows to sum.
 * @cols: Number of columns in each row.
 *
 * Return: The total sum of the rows.
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current;

	for (r = 1; r <= rows; r++)
	{
		current = 0;
		current += row_sum(r, cols);
		total += current;
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Prints the total sum of the rows.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
