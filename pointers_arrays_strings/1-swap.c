/**
 *swap_int - Swap the value of 2 integers
 *@a: value to swap
 *@b: value to swap
 *
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
