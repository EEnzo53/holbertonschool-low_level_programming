#include <stdio.h>
/**
 * main - Display reverse alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
