#include "lists.h"
#include <stddef.h>
#include <unistd.h>


/**
 * _putchar - prints a single character
 * @c: character to be printed
 *
 * Return: 1 if successful and 0 if not
 */

void _putchar(char c)
{
	write(1, &c, 1);

}



/**
 * print_num - print number using recursive functions
 * @i: number to be printed
 */

void print_num(unsigned int i)
{
	if (i / 10)
		print_num((i / 10));
	_putchar((i % 10) + '0');
}

/**
 * print_str - print string
 * @s: string to be printed
 */

void print_str(char *s)
{
	if (!s)
		s = "(nil)";
	while (*s)
	{
		_putchar(*s);
		s += 1;
	}
}
/**
 * print_list - prints a singly list
 * @node: pointer to a node
 *
 * Return: number of nodes printed
 */

size_t print_list(list_t *node)
{
	int i = 0;

	for (; (node); i++)
	{
		if (!node->str)
			node->len = 0;
		_putchar('[');
		print_num(node->len);
		_putchar(']');
		_putchar(' ');
		print_str(node->str);
		_putchar('\n');
		node = node->next;
	}

	return (i);
}
