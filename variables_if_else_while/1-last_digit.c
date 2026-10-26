#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Says if the last digit of random number is 0, less than 6 or
 * greater than 5
 *
 * Return: ALways 0
 */

int main(void)
{
	int n;
	int calc;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	calc = n % 10;

	if (calc < 6 && calc != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, calc);
	}

	if (calc == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, calc);
	}

	if (calc > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, calc);
	}
	return (0);
}
