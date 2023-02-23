#include <stdio.h>

/**
 * _isupper - determines if character is upper
 *@c: value to be tested
 *Return: return (1) if upper (0) if lower
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
