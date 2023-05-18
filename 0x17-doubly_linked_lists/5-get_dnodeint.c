#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of linked list
 * @index: index of node to be returned
 *
 * Return: node indexed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}
