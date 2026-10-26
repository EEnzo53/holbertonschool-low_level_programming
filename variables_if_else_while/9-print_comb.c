#include <stdio.h>
/**
 * main - Display numbers with a , and space
 *
 * Return: Always 0
 */
int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);

		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
