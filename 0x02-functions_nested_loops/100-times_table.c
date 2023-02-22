#include "main.h"


/**
 * print_vals - print formated table
 *@m: outer loop value
 *@n: inner loop value
 *
 */
void print_vals(int m, int n);




/**
 *print_times_table - prints times table from 0-9
 *@t: the multiple values
 */

void print_times_table(int t)
{
	if (t <= 15 && t > 0)
	{
		int n = 0;
		int m = 0;

		for (m = 0; m <= t; m++)
		{

			for (n = 0; n <= t; n++)
			{

				if (n == 0)
				{
					_putchar(48);
				}
				else if (n > 0 && n < t)
				{
				print_vals(m, n);
				}
				else if (n  == t)
				{
					print_vals(m, n);
					_putchar('\n');
				}
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
	if ((n * m) / 100 > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((n * m) / 100 + '0');
		_putchar(((n * m) % 100 / 10) + '0');
		_putchar((n * m) % 10 + '0');
	}
	else if ((n * m) / 10 > 0 && (n * m) < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((n * m) / 10 + '0');
		_putchar(((n * m) % 10) + '0');
	}
	else if ((n * m) / 10 == 0 && n > 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((n * m) + '0');
	}

}
