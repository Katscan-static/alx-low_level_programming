#include <stdio.h>

/**
 * main - prints argc
 * @argc: argumet count
 * @argv: argument variable
 * Return: always (0) success
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	argv[argc] = "";
	return (0);
}
