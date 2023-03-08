#include "main.h"

/**
 * _pow_recursion - computes x to the power of y
 * @x: value of base number
 * @y: value of powers
 * Return: x to power of y or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
