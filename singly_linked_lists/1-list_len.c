#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - says the number of elements in a linked list
 * @h: pointer to the head of list
 *
 * Return: the lenght of the list
 */
size_t list_len(const list_t *h)
{
	size_t total = 0;
	const list_t *len = h;

	while (len != NULL)
	{
		total++;
		len = len->next;
	}
	return (total);
}
