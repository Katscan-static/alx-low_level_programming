#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end
 * @head: head of linked lists
 * @n: number to add
 *
 * Return: pointer to head of linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hold;
	listint_t *current;


	hold = malloc(sizeof(listint_t));

	if (!hold)
		return (NULL);

	hold->n = n;
	hold->next = NULL;

	if (!head || !*head)
	{
		*head = hold;
		return (hold);
	}

	current = *head;
	while (current->next)
		current = current->next;
	current->next = hold;

	return (*head);
}
