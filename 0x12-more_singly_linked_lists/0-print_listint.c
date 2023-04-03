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

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *hold;

	if (!h)
		return (0);

	hold = h;
	while (hold)
	{
		printf("%d\n", hold->n);
		hold = hold->next;
		count++;
	}

	return (count);
}
