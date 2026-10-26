#include <stddef.h>
#include <stdio.h>

/**
 * main - print the size of various type on computer
 *
 * Return: Always 0
 */
int main(void)
{
	int Int;
	char Char;
	float Float;
	long int LInt;
	long long int LLI;

	printf("Size of a char: %ld byte(s)\n", sizeof(Char));
	printf("Size of an int: %ld byte(s)\n", sizeof(Int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(LInt));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(LLI));
	printf("Size of a float: %ld byte(s)\n", sizeof(Float));

	return (0);
}
