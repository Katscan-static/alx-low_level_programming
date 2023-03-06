#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals square matrix
 * @a: array to be evaluated
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	int temp1 = 0, temp2 = 0;

	for (; i < size; i++, j++)
	{
		temp1 += a[i * size + j];
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		temp2 += a[i * size + j];
	}

	printf("%d, %d\n", temp1, temp2);
}
