#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * doubly linked list
 * @head: pointer to the head pointer of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;
	for (i = 0; cur != NULL && i < index; i++)
		cur = cur->next;

	if (cur == NULL)
		return (-1);

	if (cur->prev != NULL)
		cur->prev->next = cur->next;
	else
		*head = cur->next;

	if (cur->next != NULL)
		cur->next->prev = cur->prev;

	free(cur);
	return (1);
}
