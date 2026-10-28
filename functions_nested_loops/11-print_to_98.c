#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print number until it reach 98
 *
 * @n: number who have to reach 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98)
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
