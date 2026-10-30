#include <stdio.h>
#include <stdlib.h>
/**
 *main - Calculator
 *
 *Return: Result
 */
int main(void)
{
	int choice;
	int result;
	int a;
	int b;

	printf("Simple Calculator\n1) Add\n"
	"2) Substract\n3) Multiply\n"
	"4) Divide\n0) Quit\n");

	printf("Choice: ");
	scanf("%d", &choice);

	if (choice > -1 && choice < 4)
	{
		if (choice == 0)
		{
			printf("Bye!\n");
			exit(0);
		}
		if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			result = a + b;
			printf("Result: %d\n", result);
		}
	}
	else
		printf("Invalid choice\n");

	return (0);
}
