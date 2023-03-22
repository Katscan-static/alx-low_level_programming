#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name
 * @f: pointer to function thst takes char
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
