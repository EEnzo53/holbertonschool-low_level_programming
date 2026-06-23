#include <stdio.h>
/**
 * main - Display all single digit numbers from 0 to 9 without use char
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
