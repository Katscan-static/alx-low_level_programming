#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node to the top of the list
 * @head: head of linked list
 * @n: int value for new node
 *
 * Return: null if failure, pointer to head on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;

	hold = malloc(sizeof(listint_t));

	if (!hold)
		return (NULL);
	hold->n = n;
	hold->next = *head;
	*head = hold;
	return (*head);
}
