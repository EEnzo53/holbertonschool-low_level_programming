#include <stdio.h>

void swap_demo(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n = 1312;
	int *paprika = &n;

	paprika = &n;

	*paprika = 98;

	return (0);
}
