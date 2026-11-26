#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
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

	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
