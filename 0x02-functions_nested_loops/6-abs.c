#include "main.h"

/**
 * _abs - returns abs value
 * @n: value to get the absolute value of
 *
 * Return: the absolute value
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	else if (n > 0)
	{
		return (n);
	}

	return (0);
}
