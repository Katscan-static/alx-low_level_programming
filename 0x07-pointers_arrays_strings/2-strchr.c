#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched (pointer)
 * @c: character to be searched for
 * Return: pointer to first charracter occurance
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s += 1;
	}
	if (!c)
	{
		return (s);
	}

	return (0);
}
