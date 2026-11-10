#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to copy
 *
 * Return: pointer to the new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int compt = 0, compt2 = 0, nb, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[compt] != '\0')
		compt++;
	while (s2[compt2] != '\0')
		compt2++;

	if (n >= compt2)
		nb = compt2;
	else
		nb = n;

	ptr = malloc(sizeof(char) * (compt + nb + 1));
	if (ptr == NULL)
		return (NULL);

	while (i < compt)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < nb)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
