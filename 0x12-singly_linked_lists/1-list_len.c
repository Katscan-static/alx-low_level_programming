#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns number of nodes
 * @h: head of the node
 *
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
