#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
   	int i = 0;
	int len = 0;


	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;

	}
	dest[len] = '\0';

	return (dest);
}
