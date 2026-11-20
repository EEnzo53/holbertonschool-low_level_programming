#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		total += va_arg(sum, int);

	va_end(sum);

	return (total);
}
