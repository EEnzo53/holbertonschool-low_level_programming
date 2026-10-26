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

	printf("Size of a char: %ld bytes(s)\n", sizeof(Char));
	printf("Size of a int: %ld bytes(s)\n", sizeof(Int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(LInt));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(LLI));
	printf("Size of a float: %ld bytes(s)\n", sizeof(Float));

	return (0);
}
