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

	choice = -1;

	printf("Simple Calculator\n1) Add\n"
	"2) Substract\n3) Multiply\n"
	"4) Divide\n0) Quit\n");

	printf("Choice: ");
	scanf("%d", &choice);

	if (choice == 0)
	{
		printf("Bye!\n");
		exit(0);
	}

	return (0);
}
