#include "main.h"


/**
 * print_vals - print formated table
 *@m: outer loop value
 *@n: inner loop value
 *
 */
void print_vals(int m, int n);




/**
 * times_table - prints times table from 0-9
 *
 */

void times_table(void)
{
	int n;
	int m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{

			if (n == 0)
			{
				_putchar('0');
			}
			else if (n > 0 && n < 9)
			{
				print_vals(m, n);
			}
			else if (n == 9)
			{
				print_vals(m, n);
				_putchar('\n');
			}
		}
	}

}

/**
 * print_vals - print formated table
 *@m: outer loop value
 *@n: inner loop value
 *
 */

void print_vals(int m, int n)
{
	if ((n * m) / 10 > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((n * m) / 10 + '0');
		_putchar(((n * m) % 10) + '0');
	}
	else if ((n * m) / 10 == 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((n * m) + '0');
	}

}
