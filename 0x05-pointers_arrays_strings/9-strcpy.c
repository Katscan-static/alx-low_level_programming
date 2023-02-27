#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string from *src to *dest
 * @dest: variable to be copied to
 * @src: variable to copy from
 * Return: the copied chacr
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{

		if (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
