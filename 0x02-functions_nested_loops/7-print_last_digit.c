#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to be evaluate
 *
 * Return: the last number
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n % 10 + '0');
	return (n % 10);
}
