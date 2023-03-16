#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates a grid of memory
 * @nmemb: number of rows
 * @size: number of width
 * Return: pointer or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;



	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);

}
