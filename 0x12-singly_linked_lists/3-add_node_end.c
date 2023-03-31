#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node at the tail of the linked list
 * @head: double pointer to head of list
 * @str: string to be copied
 *
 * Return: pointer to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *next_node;

	node = malloc(sizeof(list_t));

	if (!(node))
		return (NULL);

	node->str = strdup(str);

	if (!(node->str))
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(node->str);
	node->next = NULL;

	if (!head || !(*head))
	{
		*head = node;
		return (node);
	}

	next_node = *head;

	while (next_node->next)
		next_node = next_node->next;

	next_node->next = node;

	return (node);

}
