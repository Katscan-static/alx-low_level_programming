#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimesinal array on int
 * @width: width of array
 * @height: height of array
 * Return: pointer if failure NULL
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, ir;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (!p[i])
		{
			for (ir = 0; i < ir; ir++)
				free(p[ir]);

			free(p);
			break;
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
