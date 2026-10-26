#include <stdio.h>
/**
 * main - print all hexa number from 0 to 16
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;
	int hexa;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
	}

	for (hexa = 97; hexa <= 102; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');
	return (0);
}
