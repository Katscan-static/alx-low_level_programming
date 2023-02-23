#include "main.h"

/**
 * print_numbers - print number 0-9 followed by \n
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
