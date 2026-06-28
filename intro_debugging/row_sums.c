#include <stdio.h>

int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return sum;
}

int total_sum(int rows, int cols)
{
	int r;
	int total = 0;
	int current = 0;

	for (r = 1; r <= rows; r++)
    {
			int row_total = row_sum(r, cols);
		printf("r = %d, row_sum = %d, current = %d -> ", r, row_total, current); // Print before update
		current += row_total;
		printf("%d\n", current); // Print after update
		total += current;
	}

	return total;
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return 0;
}