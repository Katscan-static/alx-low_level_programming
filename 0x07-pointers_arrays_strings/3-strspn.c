#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be evaluated
 * @accept: string to be used for evaluation
 * Return: index value of substring (unsigned int)
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int valid = 0;
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				s += 1;
				valid++;

			}
			i++;
		}

		if (valid)
		{
			count++;
			valid = 0;
		}
		else
		{

		return (count);
		}
	}
	return (count);
}
