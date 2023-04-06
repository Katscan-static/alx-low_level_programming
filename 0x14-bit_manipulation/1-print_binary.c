#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int hold = 0x8000000000000000, count = 64;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (!(n & hold))
	{
		n = n << 1;
		count--;
	}

	for(; count > 0; count--)
	{
		if (n & hold)
			_putchar('1');
		else
			_putchar('0');

		n = n << 1;
	}
}
