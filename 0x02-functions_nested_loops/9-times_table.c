#include "main.h"

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

			if ((n * m) / 10 > 0 && n < 9)
			{
				_putchar((n * m) / 10 + '0');
				_putchar((n * m) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((n * m) / 10 == 0 && n < 9)
			{
				_putchar(n * m + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (n == 9 && (n * m) / 10 > 0)
			{
				_putchar((n * m) / 10 + '0');
				_putchar((n * m) % 10 + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(n * m + '0');
				_putchar('\n');
			}
		}
	}
}
