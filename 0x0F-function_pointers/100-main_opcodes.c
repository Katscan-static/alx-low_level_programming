#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @ac: argument count
 * @av: argument variable
 * Return: 0 always success
 */

int main(int ac, char **av)
{
	int i;
	char *s;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;

	for (i = 0; i < (atoi(av[1]) - 1); i++)
	{
		printf("%02hhx ", s[i]);
	}

	printf("%02hhx\n", s[i]);

	return (0);
}
