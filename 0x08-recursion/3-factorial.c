#include "main.h"

/**
 * factorial - retuns factorial of number n
 * @n: the number to get factorial of
 * Return: int factorial or -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
