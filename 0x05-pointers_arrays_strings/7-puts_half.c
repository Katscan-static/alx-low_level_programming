#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints secong half of array
 * @str: the string to be evaluated(pointer)
 */

void puts_half(char *str)
{
	int count = 0;
	int h_count = 0;

	while (*str++)
		count++;
	h_count = count / 2;

	str -= (h_count + 1);
	for (count = 0; h_count >  count; count++)
	{
		if (*str)
		{
			_putchar(*str++);
		}
	}
	_putchar('\n');
}
