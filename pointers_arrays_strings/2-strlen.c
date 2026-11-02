#include "main.h"
/**
 *_strlen - return the lenght of a string
 *@s: string to return
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
