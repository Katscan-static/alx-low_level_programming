#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly list
 * @node: pointer to a node
 *
 * Return: number of nodes printed
 */

int print_list(list_t *node)
{
	int i = 0;

	for (; (node); i++)
	{
		if (!node->str)
			node->len = 0;
		_printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}

	return (i);
}
