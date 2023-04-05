#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse list
 * @head: head of list
 *
 * Return: pointer to head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
