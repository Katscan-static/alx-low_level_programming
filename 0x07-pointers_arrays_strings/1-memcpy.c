#include "main.h"

/**
 * _memcpy - copies one values from *src to *dst
 * @dest: memory location to be printed to
 * @src: memory location to print from
 * @n: number of memory locations to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
