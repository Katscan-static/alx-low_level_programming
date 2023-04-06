#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: 1 if little endianness else 0
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *c = (char *)&test;

	if (*c)
		return (1);
	return (0);
}
