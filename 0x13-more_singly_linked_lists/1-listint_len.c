#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - print number of elements
 * @h: header of a linked list
 *
 * Return: 0 if null, count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *hold;

	if (!h)
		return (0);

	hold = h;
	while (hold)
	{
		hold = hold->next;
		count++;
	}

	return (count);
}
