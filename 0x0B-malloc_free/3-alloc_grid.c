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
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(sizeof(int *) * height);

	if (!p)
		return (0);

	for (; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		for (; j < width; j++)
			p[i][j] = 0;
	}

	for (i = 0; i < height; i++)
		free((void *)p[i]);
	free((void *)p);

	return (p);
}
