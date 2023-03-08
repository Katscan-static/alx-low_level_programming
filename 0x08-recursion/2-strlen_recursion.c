#include "main.h"

/**
 * _strlen_recursion - retuns length of string
 * @s: pointer to char array
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
