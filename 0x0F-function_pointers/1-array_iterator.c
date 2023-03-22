#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate using function pointer
 * @array: array to be iterated over
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	if (action)
		for (; i < size; i++)
		{
			action(array[i]);
		}
}
