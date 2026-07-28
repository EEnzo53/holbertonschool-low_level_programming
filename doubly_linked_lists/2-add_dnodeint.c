#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodes = malloc(sizeof(dlistint_t));

	if (nodes == NULL)
		return (NULL);

	nodes->n = n;
	nodes->prev = NULL;
	nodes->next = *head;

	if (*head != NULL)
		(*head)->prev = nodes;

	*head = nodes;

	return (nodes);
}
