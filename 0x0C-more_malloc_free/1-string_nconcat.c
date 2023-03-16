#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatinate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of s2 characters
 * Return: pointer, Null if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, c1 = 0, c2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[c1])
		c1++;

	while (s2[c2])
		c2++;

	if (n < c2)
		c2 = n;

	p = malloc(sizeof(char) * (c1 + c2) + 1);

	if (p)
	{
		for (i = 0; s1[i]; i++)
			p[i] = s1[i];

		for (j = 0; j < c2; j++)
			p[c1 + j] = s2[j];

		p[c1 + c2] = '\0';
		return (p);
	}
	return (0);
}
