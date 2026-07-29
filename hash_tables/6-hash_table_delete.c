#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			tmp = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
