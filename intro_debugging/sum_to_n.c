#include <stdio.h>

int sum_to_n(int n)
{
    int i;
    int sum = 0;

    // Loop until i <= n to include n in the sum
    for (i = 1; i <= n; i++)
        sum += i;

    return sum; // Return the sum, not n
}

int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
