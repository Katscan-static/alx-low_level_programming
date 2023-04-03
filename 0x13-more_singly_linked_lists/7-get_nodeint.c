#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get node at nth index
 * @head: head of linked list
 * @index: index
 *
 * Return: NULL on failure, pointer to listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *hold;

	if (!head)
		return (NULL);

	hold = head;
	for (i = 0; i < index; i++)
	{
		if (hold)
		{
			hold = hold->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (hold);

}
