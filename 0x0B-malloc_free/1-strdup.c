#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to copy a string
 * @str: string to be copied
 * Return: pointer if success NULL if not
 */

char *_strdup(char *str)
{
	char *p;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[count])
	{
		count++;
	}

	p = malloc(sizeof(char) * count + 1);

	if (!count)
	{
		p[count] = '\0';
		return (p);
	}
	else if (count)
	{
		for (i = 0; i < count; i++)
		{
			p[i] = str[i];
		}

		p[count] = '\0';
		return (p);

	}
	else if (p == NULL)
		return (NULL);

	return (NULL);
}
