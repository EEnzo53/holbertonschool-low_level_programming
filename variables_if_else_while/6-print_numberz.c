#include <stdio.h>
/**
 * main - Display all single digit numbers from 0 to 9 without use char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}