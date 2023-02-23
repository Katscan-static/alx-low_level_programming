#include "main.h"

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
	int d = 10;

	if (num / d == 0)
	{
		_putchar(num + 48);
	}
	else
	{

		for (i = 1; i < 9; i++)
		{
			if (num / d == 0)
			{
				break;
			}
			d *= 10;
		}


			d /= 10;
			_putchar(num / d + '0');

			while (d != 1)
			{
				_putchar(((num % d) / (d / 10)) + '0');
				d /= 10;
			}
	}
}
