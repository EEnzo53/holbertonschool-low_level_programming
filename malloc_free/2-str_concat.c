#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *
 * Return:len or NULL if not success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0, len2 = 0, i = 0, j = 0;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;

	ret = malloc(sizeof(char) * (len + len2 + 1));
	if (ret == 0)
		return (NULL);

	while (i < len)
	{
		ret[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = '\0';

	return (ret);
}
