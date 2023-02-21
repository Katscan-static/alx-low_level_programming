#include "main.h"

/**
 * print_alphabet - print alphabet using _putchar
 *
 * Return: Always (0) success
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
