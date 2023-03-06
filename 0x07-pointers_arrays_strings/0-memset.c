#include "main.h"

/**
 * _memset - fills n memory locations with specified byte char
 * @s: startting memory location(pointer)
 * @b: byte used to fill memory locations
 * @n: number of byte locations to fill
 * Return: char pointer to start of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i  < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
