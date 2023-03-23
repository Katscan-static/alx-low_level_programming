#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument variable
 * Return: always 0 success
 */

int main(int ac, char **av)
{
	int (*f)(int, int);
	int result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*'
		&& av[2][0] != '/' && av[2][0] != '%') || strlen(av[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((av[2][0] == '/' && atoi(av[3]) == 0) ||
			(av[2][0] == '%' && atoi(av[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(av[2]);
	result = f(atoi(av[1]), atoi(av[3]));
	printf("%d\n", result);

	return (0);

}
