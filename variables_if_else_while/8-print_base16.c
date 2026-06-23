#include <stdio.h>
/**
 * main - Display all single digit numbers from 0 to 9 without use char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	char g;

	for (u = '0'; u <= 9; u++)
	for (g = 'a'; g <= 'f'; g++)
	{
		putchar(u);
	}
	{
		putchar(g);
	}
	putchar(\n);
	return (0);
}