#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation function for a given operator
 * @s: A pointer to a string containing the operator (one char)
 *
 * Return: A pointer to the corresponding function that performs the
 * requested operation, or NULL if the operator is invalid.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
