#include "main.h"

/**
 * binary_to_uint - converts a binary string to uint
 * @b: string to be converted
 *
 * Return: converted unint or 0;
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, hold = 1;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
		{
			num = num << 1;
			num = num | hold;
		}
		else if (*b == '0')
			num = num << 1;
		else
			return (0);

		b += 1;
	}

	return (num);
}
