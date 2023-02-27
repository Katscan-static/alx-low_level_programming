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
	int count = 0, i = 0;
	while (*src++)
		count++;
	printf("%d\n", count);
	
	src -= (count + 1);
	for (i = 0; i < count; i++)
	{

		dest[i] = src[i];
	}

	return dest;
}
