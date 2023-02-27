#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @s: the string to be printed
 */

void _puts(char *s)
{
	do
	{	if(*s)
		{	
		_putchar(*s);
		}
	} while (*s++);

}
