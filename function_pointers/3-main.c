#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for calculator program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 98 on argument error,
 * 99 on operator error, 100 on division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op(a, b));

	return (0);
}
