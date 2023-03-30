#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

/**
 * print_list - prints nodes
 * @node: list_t to be printed
 *
 * Return: number of nodes
 */
size_t print_list(list_t *node)
{
	long unsigned int i = 0;

	for (; (node); i++)
	{
		if (!node->str)
			node->len = 0;
		printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}

	return (i);
}
