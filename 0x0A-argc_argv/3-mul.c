#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply arguments
 * @argc: argument count
 * @argv: argument variable
 * Return: always (0) success
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
