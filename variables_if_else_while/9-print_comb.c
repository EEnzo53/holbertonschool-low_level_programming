#include <stdio.h>
/**
 * main - Display all single-digit numbers and separated by ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e;

for (e = '0'; e <= '9'; e++)
{
	putchar(e);
	if (e != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
	return (0);
}
