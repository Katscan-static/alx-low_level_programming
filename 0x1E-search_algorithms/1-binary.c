#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - binary search a array
 * @array: array
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of matched number or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (!array)
		return (-1);

	left = 0;
	right = (int)(size - 1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;

	}

	return (-1);
}
