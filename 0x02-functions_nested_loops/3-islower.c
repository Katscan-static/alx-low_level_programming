#include "main.h"

/**
 * _islower - check if character is lowcase
 *
 * @c: characte to test if lowercase
 *
 * Return: (1) if uppercase (0) is lowe case
 *
 */

int _islower(char c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
