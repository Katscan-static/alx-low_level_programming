#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head of list
 *
 * Return: pointer to head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	while (!*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;
	}

	*head = prev;
	return (*head);
}
