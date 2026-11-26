#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = node;

	return (node);
}
