#include "main.h"

/**
 * print_sign - print sign of an integer
 * @n: n is the number to be checked
 *
 * Return: (1) if positive (0) if zero and (-1) if negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
