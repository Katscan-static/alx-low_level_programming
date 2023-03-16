#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints range of int
 * @min: minimum number
 * @max: maximum number
 * Return: pointer or NULL if fails
 */

int *array_range(int min, int max)
{
	int n_int, i, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	n_int = (max - min) + 1;

	p = malloc(sizeof(int) * n_int);

	if (!p)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		p[j] = i;
	}

	return (p);
}
