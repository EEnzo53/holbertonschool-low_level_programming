#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: final conditions
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(", ");
            printf("%d", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
     _putchar('\n');
}
