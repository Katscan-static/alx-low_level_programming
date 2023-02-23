#include "main.h"

/**
 * more_numbers - print numbers 0-14 10 times
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			j = i;
			if (i / 10 > 0)
			{
				_putchar(i / 10 + 48);
				j = (i % 10);

			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
