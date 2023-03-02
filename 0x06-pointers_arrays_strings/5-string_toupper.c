#include "main.h"

/**
 * string_toupper - convert lower case to uppercase
 * @s: string to be converted
 * Return: the string updated
 */

char *string_toupper(char *s)
{

	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'Z')
		{
			*s -= 32;
		}
		
		s += 1;;
	}


	return (p);

}
