#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	j = 0;
	while (s[j] != '\0');
		j++;

	j--;

	i = 0;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
