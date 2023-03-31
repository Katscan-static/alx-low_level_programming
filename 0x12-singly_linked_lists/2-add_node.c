#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds node to the head of a list
 * @head: a double pointer to the head of a list
 * @str: the null terminated string to be copied
 *
 * Return: pointer to node or NULL if unsuccessful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	node->str = strdup(str);

	if (!(node->str))
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(node->str);
	node->next = *head;
	*head = node;

	return (node);
}
