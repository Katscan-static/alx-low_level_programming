#include "main.h"

/**
 * _isalpha - check is character is alphabet
 * @c: character to test if alpha
 *
 * Return: (1) if alphabet and (0) if not
 *
 */

int _isalpha(char c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}

	return (0);

}
