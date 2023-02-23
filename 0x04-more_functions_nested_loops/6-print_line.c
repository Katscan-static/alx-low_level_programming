#include "main.h"

/**
 * print_line - print line using _putchar('_')
 * @n: number of underscores to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
