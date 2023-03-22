#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return matching index
 * @array: array to be tested
 * @size: size of array
 * @cmp: compare pointer function
 * Return: -1 if fail and 1 if succesful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size <= 0 && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
