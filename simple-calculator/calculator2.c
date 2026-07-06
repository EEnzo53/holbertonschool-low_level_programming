#include <stdio.h>

int main(void)
{
	int choice = 1;

	int a = 0;
	int b = 0;
	int result = 0;

	printf("Welcome to the CALCULATOOR\n");

	while (choice != 0)
	{

		if (choice >= -1 && choice <= 5)
		{
			printf("Que souhaite tu faire sur la CALCULATOOOOR ?\n");
			printf("1) Add \n 2) Multiply \n 3) Substarct \n 4) Divide \n 0) Quit \n");
			scanf("%d", &choice);
			if (choice < 0 || choice > 5)
			{
				printf("Pas le bon choix trou de balle\n");
				return (choice);
			}
			else if (choice == 1)
			{
				printf("Chiffre 1 :");
				scanf("%d", &a);
				printf("Chiffre 2 :");
				scanf("%d", &b);
				result = a + b;
				printf("Le résultat est : %d\n", result);
			}
			else if (choice == 2)
			{
				printf("Chiffre 1 :");
				scanf("%d", &a);
				printf("Chiffre 2 :");
				scanf("%d", &b);
				result = a * b;
				printf("Le résultat est : %d\n", result);
			}
			else if (choice == 3)
			{
				printf("Chiffre 1 :");
				scanf("%d", &a);
				printf("Chiffre 2 :");
				scanf("%d", &b);
				result = a - b;
				printf("Le résultat est : %d\n", result);
			}
			else if (choice == 4)
			{
				printf("Chiffre 1 :");
				scanf("%d", &a);
				printf("Chiffre 2 :");
				scanf("%d", &b);
				if (b == 0)
				{
					printf("Depuis quand on divise par 0...\n");
					return (choice = 0);
				}
				result = a / b;
				printf("Le résultat est : %d\n", result);
			}
			else if (choice == 0)
			{
				printf("Bah nique ta mère\n");
				return (0);
			}
	}
	return (0);
}
