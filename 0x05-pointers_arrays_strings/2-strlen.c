#include <stdio.h>
#include "main.h"

/**
 * _strlen - counts the string length
 * @s: the string t be evaluated(pointer)
 * Return: Returns the counted value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;
	return count;
}
