#include "main.h"

/**
 * cap_string - capitalizes words in a string
 * @s: string to be evaluated
 * Return: char pointer of a string
 */

char *cap_string(char *s)
{
	int cap = 0;
	int count = 0;

	while (*s)
	{
		if (*s == ',' || *s == ';' || *s == '.' || *s == '!' ||
		    *s == '?' || *s == '"' || *s == '(' || *s == ')' ||
		    *s == '{' || *s == '}' || *s == '\n' || *s == '\t' || *s == ' ')
		{
			cap = 1;
			s += 1;
			count++;
			if (*s < 'a' || *s > 'z')
			{
				cap = 0;
			}
		}

		if (*s >= 'a' && *s <= 'z' && cap == 1)
		{
			*s -= 32;
			cap = 0;
		}


		s += 1;
		count++;
	}
	s -= count;
	return (s);
}
