#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
