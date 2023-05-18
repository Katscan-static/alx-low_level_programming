#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add node to double linked list
 * @head: pointer to head of linked list
 * @n: value
 *
 * Return: pointer to new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *hold;

	hold = malloc(sizeof(dlistint_t));
	if (!hold)
		return (NULL);

	if (*head)
		(*head)->prev = hold;
	hold->n = n;
	hold->next = *head;
	hold->prev = NULL;
	*head = hold;

	return (*head);
}
