#include "main.h"
/**
 * sring_toupper - changes all lowercase letters of a string to uppercase.
 *
 */
char *string_toupper(char *)
{
	int i;

	while (str[i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
}
