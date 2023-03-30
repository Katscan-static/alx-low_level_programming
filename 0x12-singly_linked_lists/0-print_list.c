#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints nodes
 * @node: list_t to be printed
 *
 * Return: number of nodes
 */
size_t print_list(list_t *node)
{
	size_t i = 0;

	for (; (node); i++)
	{
		if (!node->str)
		{
			node->str = "(nil)";
			node->len = 0;
		}
		printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}

	return (i);
}
