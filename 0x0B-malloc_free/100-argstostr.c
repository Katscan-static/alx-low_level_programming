#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - arguments to string
 * @ac: argument count
 * @av: arguments
 * Return: NULL if av || ac == 0, pointer on success
 */

char *argstostr(int ac, char **av)
{
	int i = 0, len = 0, j = 0, k;
	char *c;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac;
	c = malloc((len * sizeof(char)) + 1);

	if (!c)
		return (NULL);

	i = 0;
	for (k = 0; k < ac; k++)
	{
		j = 0;
		while (av[k][j])
		{
			c[i] = av[k][j];
			j++;
			i++;
		}
		c[i] = '\n';
		i++;
	}
	c[len] = '\0';
	return (c);
}
