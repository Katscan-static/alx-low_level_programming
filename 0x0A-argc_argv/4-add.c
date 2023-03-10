#include <stdio.h>
#include <stdlib.h>

/**
 * str_num - check if string is positive number
 * @s: string argument to be tested
 * Return: 1 if number 0 if not
 */

int str_num(char *s)
{
	if (!*s)
		return (1);

	if (*s < '0' || *s > '9')
		return (0);

	return (1 * str_num(s + 1));
}

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: Always (0) success
 */

int main(int argc, char **argv)
{
	int i;
	int var;

	for (i = 1; i < argc; i++)
	{
		if (str_num(argv[i]))
		{
			var += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", var);
	return (0);
}
