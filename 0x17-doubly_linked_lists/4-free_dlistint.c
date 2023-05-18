#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free dlink list
 * @head: head of dlink list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
