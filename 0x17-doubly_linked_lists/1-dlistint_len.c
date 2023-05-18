#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return linked list length
 * @h: head of linked list
 *
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t *hold = NULL;

	if (!h)
		return (n);
	hold = (dlistint_t *) h;
	while (hold)
	{
		hold = hold->next;
		n++;
	}
	return (n);
}
