#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index n
 * @head: head of linked listts
 * @index: index value to be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int count = 0;
	listint_t *hold, *next;

	if (!head || !*head)
		return (-1);

	hold = *head;
	if (index == 0)
	{
		*head = hold->next;
		free(hold);
		return (1);
	}

	for (; count < (index - 1); count++)
	{

		if (!hold)
			return (-1);

		hold = hold->next;

	}

	if (!hold || !hold->next)
		return (-1);


	next = hold->next;
	hold->next = next->next;
	free(next);
	return (1);


}
