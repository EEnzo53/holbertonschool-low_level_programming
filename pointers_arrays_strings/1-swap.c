#include "main.h"

void swap_int(int *a, int *b);
{
	int temp;
	temp = *a = *b;
	*a = *b;
	*b = temp;
}
	int main()
	{
		int n = 78;
		int m = 15;

		int *paprika = &n;
		paprika = &m;

		*paprika = 98;
		paprika = 94

		*paprika = 94;

		int x = 10;
		int y = 20;

		int temp;
		temp = x;
		x = y;
		y = temp;

		return (0);
	}
