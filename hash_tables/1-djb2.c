#include "hash_tables.h"

/**
 * djb2_hash - generate a hash value for a string using the djb2 algorithm
 * @str: the string to hash
 *
 * Return: the computed hash value
 */
unsigned long djb2_hash(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
