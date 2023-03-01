#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatinate two strings
 * @dest: the string to be concatinated to
 * @src: the string to concatinate
 * Return: pointer to resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*dest)
	{
		count++;
		dest += 1;
	}

	while (*src)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		count++;
	}

	dest -= count;
	dest[count] = '\0';
	return (dest);

}
