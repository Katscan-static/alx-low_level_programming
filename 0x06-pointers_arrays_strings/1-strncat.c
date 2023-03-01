#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatinate two strings
 * @dest: the string to be concatinated to
 * @src: the string to concatinate
 * @n: number of bytes to be printed
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i;

	while (*dest)
	{
		count++;
		dest += 1;
	}

	for (i = 0; i < n; i++)
	{
		if (*src)
		{
			*dest = *src;
			dest += 1;
			src += 1;
			count++;
		}
		else
		{
			break;
		}
	}

	dest -= count;
	return (dest);

}
