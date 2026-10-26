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
	double Double;
	long long int LLI;

	printf("Size of a int: %ld bytes(s)\n", sizeof(Int));
	printf("Size of a char: %ld bytes(s)\n", sizeof(Char));
	printf("Size of a float: %ld bytes(s)\n", sizeof(Float));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(Double));
	printf("Size of a long long int: %ld bytes(s)", sizeof(LLI));

	return (0);
}
