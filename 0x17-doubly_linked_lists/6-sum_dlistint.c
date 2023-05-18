#include "lists.h"

/**
 * sum_dlistint - add values of dlist
 * @head: head of linked list
 *
 * Return: sum of dlink values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
