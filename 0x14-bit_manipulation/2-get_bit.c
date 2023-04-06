#include "main.h"

/**
 * get_bit - get bit value at specified index
 * @n: number
 * @index: index
 *
 * Return: value or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold = 0x01;


	if (index > 63)
		return (-1);

	while (index)
	{
		n = n >> 1;
		index--;
	}

	if (n & hold)
		return (1);

	return (0);
}
