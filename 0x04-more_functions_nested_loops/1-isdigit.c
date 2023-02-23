#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: value to be tested
 * Return: return (1) if digit else (0)
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
