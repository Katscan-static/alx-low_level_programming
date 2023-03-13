#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array to be created
 * @c: chacracter to fill with
 * Return: pointer if successful and NULL if not successful
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (p)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}

	return (NULL);
}
