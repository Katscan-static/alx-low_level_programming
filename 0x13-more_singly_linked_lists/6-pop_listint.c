#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop head from list
 * @head: head of list
 *
 * Return: int from list or 0 if null
 */

int pop_listint(listint_t **head)
{
	int n_hold;
	listint_t *hold, *old_head;

	if (!*head)
		return (0);

	old_head = *head;
	if (!old_head->next)
		*head = NULL;
	else
		hold = old_head->next;

	n_hold = old_head->n;
	*head = hold;
	free(old_head);

	return (n_hold);
}
