#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: pointer to the head pointer of the list
 * @n: integer value to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodes = malloc(sizeof(dlistint_t));

	if (nodes == NULL)
		return (NULL);

	nodes->n = n;
	nodes->prev = *head;
	nodes->next = NULL;

	if (*head != NULL)
		(*head)->next = nodes;

	*head = nodes;

	return (nodes);
}
