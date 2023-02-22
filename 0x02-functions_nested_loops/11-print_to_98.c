#include "main.h"

/**
 * print_v - print values
 * @n: variable to be tested
 *
 */

void print_v(int n);


/**
 * print_to_98 - count from any int to 98
 * @n: int value
 *
 */

void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				m = n * -1;
				if (m == 98)
				{
				
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				print_v(m);
			}
			else if (n >= 0)
			{
				print_v(n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_v(n);
		}
	}

}



/**
 * print_v - print values
 * @n: variable to be tested
 *
 */

void print_v(int n)
{

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (n / 10 > 0 && n != 98)
	{
		if (n >= 100)
		{
			_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');

		}
	}
	else if (n / 10 == 0)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');

	}
}
