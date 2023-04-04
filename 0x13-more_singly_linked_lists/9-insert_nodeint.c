#include "lists.h"
#include <stdlib.h>

/**
 * nde - add node
 * @ct: count
 * @i: index
 * @c: current
 * @n: next
 * @h: hold
 * Return: pointer
 */
listint_t *nde(int ct, int i, listint_t **c, listint_t **n, listint_t **h)
{
	for (; ct <= i; ct++)
	{
		*n = (*c)->next;
		if (!*n && (ct < (i - 1)))
			return (NULL);

		if (ct == (i - 1))
		{
			(*c)->next = *h;
			if (!*n)
			{
				(*h)->next = NULL;
				return (*h);
			}
			else
			{
				(*h)->next = *n;
				return (*h);
			}
		}
		*c = (*c)->next;
	}
	return (NULL);
}


/**
 * insert_nodeint_at_index - add node int at node
 * @head: head of linked list
 * @idx: index
 * @n: number to be inserted
 *
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;

	listint_t *hold;
	listint_t *current;
	listint_t *next;

	if (!*head || !head)
		return (NULL);

	hold = malloc(sizeof(listint_t));

	if (!hold)
		return (NULL);

	hold->n = n;
	current = *head;

	if (idx == 0)
	{
		*head = hold;
		hold->next = current;
		return (*head);
	}

	if (nde((int)cnt, (int)idx, &current, &next, &hold))
		return (hold);

	free(hold);
	return (NULL);
}
