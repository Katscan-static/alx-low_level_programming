#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @s: the string to be printed
 */

void puts2(char *s)
{
	int i = 1;
	
	if (*s)
	{
		_putchar(*s);
	}
	while (*s++)
	{
		if (*s && i % 2 == 0)
		{
		_putchar(*s);
		}
		i++;
	}
	_putchar('\n');
}
