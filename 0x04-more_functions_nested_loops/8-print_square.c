#include "main.h"

/**
 * print_square - print square using "#"
 * @size: size of square
 */

void print_square(int size)
{
	int i;
	int s;

	for (i = 0; size > i; i++)
	{
		for (s = size; s > 0; s--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
