#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - linear search an array
 * @array: array
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of matched value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
			return ((int)i);
	}

	return (-1);
}
