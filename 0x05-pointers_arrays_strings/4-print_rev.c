#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	s -= (count + 1);
	for (; count >= 0; count--)
	{
		if (s[count])
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
