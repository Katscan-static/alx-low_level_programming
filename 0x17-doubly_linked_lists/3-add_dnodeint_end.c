#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_dnodeint_end - add node to end of dlink
 * @head: pointer to head
 * @n: value for new node
 *
 * Return: pointer to new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hold = NULL;
	dlistint_t *prev = NULL;
	dlistint_t *next = NULL;

	hold = malloc(sizeof(dlistint_t));
	if (!hold)
		return (NULL);
	next = *head;
	if (*head)
	{
		while (next)
		{
			prev = next;
			next = next->next;
		}
	}
	else
		*head = hold;

	hold->n = n;
	if (prev)
		prev->next = hold;
	hold->next = NULL;
	hold->prev = prev;
	return (hold);
}
