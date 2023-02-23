#include "main.h"
/**
 * print_diagonal - print diagonal line using \ using _putchar
 * @n: number of time to print
 */



void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		k = i;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}

		_putchar('\\');
		_putchar('\n');

	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
