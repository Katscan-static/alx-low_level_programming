#include "main.h"

/**
 * string_toupper - convert lower case to uppercase
 * @s: string to be converted
 * Return: the string updated
 */

char *string_toupper(char *s)
{

	int i = 0;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s += 1;
		i++;
	}

	s -= i;
	return (s);

}
