#include "main.h"

/**
 * _strpbrk - searches a string for a character from substring
 * @s: string to be searched(pointer)
 * @accept: substring of characters(pointer)
 * Return: pointer to first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s += 1;
	}

	return (0);
}
