#include <stdio.h>
/**
 * main - entry point for simple calculator program
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice = -1;

	printf("simple calculator\n");
	while (choice != 0)
	{
		printf("1) add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf("choice ?\n");
		scanf("%d", &choice);
	}

	return (0);
}
