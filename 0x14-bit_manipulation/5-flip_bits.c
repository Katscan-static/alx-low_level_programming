#include "main.h"

/**
 * flip_bits - check how many bits need to be flipped
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check;
	unsigned int count = 0;

	check = n ^ m;

	while (check)
	{
		if (check & 0x01)
			count++;
		check = check >> 1;
	}

	return (count);
}
