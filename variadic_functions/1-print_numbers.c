#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a delimiter
 * @separator: String to separate numbers, can be NULL
 * @n: Number of integers to print
 * ...: Variable number of integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
