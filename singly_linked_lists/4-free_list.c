#include "lists.h"
#include <stddef.h>
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the first node in the list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
