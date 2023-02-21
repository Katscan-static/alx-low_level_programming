#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10 times
 *
 * Return: Always (0) success
 *
 */

void print_alphabet_x10(void)
{
	char c;
	short int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
