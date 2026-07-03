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
		if (choice < 5 && choice > -1)
		{
		printf("1) add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		}
		printf("choice ?\n");
		scanf("%d", &choice);
		if (choice < -1 || choice > 5)
		{
			printf("Invalid Choice");
		}
		if (choice == 0)
		{
			printf("Bye!");
		}
	}
	return (0);
}
