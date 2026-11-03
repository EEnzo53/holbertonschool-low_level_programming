#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer, 0 if there is no number
 */
int _atoi(char *s)
{
	int i = 0;
	int val = 0;
	int found = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			val = (val * 10) - (s[i] - '0');
			found = 1;
		}
		else if (found == 1)
			break;
		else if (s[i] == '-')
			sign = -sign;
		i++;
	}
	if (sign == 1)
		return (-val);
	return (val);
}
