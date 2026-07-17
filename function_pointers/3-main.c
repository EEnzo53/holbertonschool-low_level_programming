#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for calculator program
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * This program performs a simple arithmetic operation on two integers
 * using an operator provided as a command line argument. It validates
 * the argument count, operator, and checks for division/modulo by zero.
 * Return: 0 on success, exits with 98, 99, or 100 on error conditions.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(a, b));

	return (0);
}
