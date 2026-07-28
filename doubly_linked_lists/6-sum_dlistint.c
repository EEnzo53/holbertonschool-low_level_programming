#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
