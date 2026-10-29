#include <stdio.h>
/**
 * main - Fizz Buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		if (i % 5 == 0)
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
