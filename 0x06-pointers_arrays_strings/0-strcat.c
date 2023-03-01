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
	while (*dest++)
		;

	while (*src)
	{
		if (*src)
		{
		*dest++ = *src++;
		}
	}
	*dest = '\0';
	return (dest);

}
