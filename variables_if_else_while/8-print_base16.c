#include <stdio.h>
/**
 * main - Display the 9 first numbers and the 6 first letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = '0'; u <= '9'; u++)
	{
		putchar(u);
	}
	for (u = 'a'; u <= 'f'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
