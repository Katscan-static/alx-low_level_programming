#include "main.h"
#include <stdio.h>
/**
 * compute_num - computes and prints number
 * @num: num to be computed
 */

void compute_num(int num);

/**
 * print_number - print number
 * @n: integer to be printed
 */


void print_number(int n)
{
	int b = n;

	if (n < 0)
	{
		b = ~n + 1;
		_putchar('-');
		compute_num(b);
	}
	else if (n >= 0)
	{
	compute_num(n);
	}

}

/**
 * compute_num - computes and prints number
 * @num: num to be computed
 */
void compute_num(int num)
{
	int i;
	unsigned int e;
	unsigned int d = 10;

	if (num < 0)
	{
		e = ~num + 1;
	}
	e = num;

	if (e / d == 0)
	{
		_putchar(e + 48);
	}
	else
	{
		if (e > 100000000)
		{
			i = e / 1000000000;
			_putchar(i + '0');
			e = e % 1000000000;
		}
		for (i = 1; i <= 9; i++)
		{
			if (e / d == 0)
			{
				break;
			}
			d *= 10;
		}


			d /= 10;
			_putchar(e / d + '0');

			while (d != 1)
			{
				_putchar(((e % d) / (d / 10)) + '0');
				d /= 10;
			}
	}
}
