#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: index
 * @n: value
 *
 * Return: pointer to new node
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *hold = NULL, *current = (*h), *prev = NULL;

	do {
		if (idx == 0)
			hold = add_dnodeint(h, n);
		else if (i == idx)
		{
			hold =  malloc(sizeof(dlistint_t));
			if (!hold)
				return (NULL);
			hold->n = n;
			prev->next = hold;
			hold->prev = prev;
			hold->next = current;
			current->prev = hold;
			break;
		}
		prev = current;
		current = current->next;
		i++;
	} while (current);

	return (hold);
}
