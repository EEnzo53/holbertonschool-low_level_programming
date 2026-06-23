#include <stdio.h>
/**
 * main - Display the 9 first numbers and the 6 first letters
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
