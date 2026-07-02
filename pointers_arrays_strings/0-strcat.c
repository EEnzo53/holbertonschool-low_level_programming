#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	int j;

	i = len;
	j = 0;

	len = 0;

	while (dest[len] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest[i] <= '\0')
	{
		_putchar('\n');
	}
	return (dest);
}
