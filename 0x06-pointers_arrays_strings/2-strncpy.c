#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatinate two strings
 * @dest: the string to be concatinated to
 * @src: the string to concatinate
 * @n: number of bytes to be printed
 * Return: pointer to resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int i;
	char *c = dest;

	while (*dest)
	{
		count++;
		dest += 1;
	}

	dest -= count;
	for (i = 0; i < n; i++)
	{
		if (*src)
		{
			*dest++ = *src++;
			count++;
		}
		else if (!*src)
		{
			*dest = '\0';
		}
		else
		{
			break;
		}
	}

	dest -= count;
	return (c);

}
