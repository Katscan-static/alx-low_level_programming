#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - checks if number
 * @s: string to be checked
 * Return: 1 if num else 0
 */

int check_num(char *s)

{
	if (!*s)
		return (1);

	if (*s < '0' || *s > '9')
		return (0);

	return (1 * check_num(s + 1));
}

/**
 * main - entry point
 * @ac: argc
 * @av: argv
 * Return: 0 always success
 */

int main(int ac, char **av)
{
	char *s;
	int cnt = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (check_num(av[1]) && check_num(av[2]))
		{
			cnt =  20;
			s = malloc(sizeof(char) * cnt);

			if (s)
			{
				free(s);
				return (0);
			}
		}
	}

	return (0);
}
