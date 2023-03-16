#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if malloc
 * @b: number of bytes
 * Return: pointer p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p)
		return (p);
	exit(98);
}
