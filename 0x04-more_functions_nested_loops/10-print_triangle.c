#include "main.h"

/**
 * print_triangle - print triangle using _putchar
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int k;
	int n = size;
	int d = 0;
	int h;

	for (i = 1; i <= size; i++)
	{
		d++;
		n--;
		for (k = 1; k <= n ; k++)
		{
			_putchar(' ');
		}

		for (h = 0; h < d; h++)
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
