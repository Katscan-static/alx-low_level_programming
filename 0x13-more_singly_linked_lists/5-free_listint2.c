#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees all allocated memory
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;
	listint_t *current;

	if (head)
	{
		hold = *head;
		while (hold)
		{
			current = hold->next;
			free(hold);
			hold = current;
		}
	}

	*head = NULL;
}
