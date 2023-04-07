#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: value to change bit at index at
 * @index: index
 *
 * Return: 1 if bit changed successfully else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hold = 0x01;

	if (index > 63)
		return (-1);

	hold = hold << index;
	(*n) = (*n) | hold;

	return (1);
}
