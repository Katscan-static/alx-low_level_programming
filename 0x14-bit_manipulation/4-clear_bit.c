#include "main.h"

/**
 * clear_bit - sets bit to 1
 * @n: value to change bit at index at
 * @index: index
 *
 * Return: 1 if bit changed successfully else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hold = 0x01;

	if (index > 63)
		return (-1);

	hold = hold << index;
	hold = ~hold;
	(*n) = (*n) & hold;

	return (1);
}
