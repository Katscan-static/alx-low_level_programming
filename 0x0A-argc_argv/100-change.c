#include <stdlib.h>
#include <stdio.h>

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
 * check_cents - check cents to give back
 * @cents: value to convert to cents
 * Return: amount of cents needed
 */

int check_cents(int cents)
{
	if (!cents)
		return (0);

	if ((cents - 25) >= 0)
		return (1 + check_cents(cents - 25));
	if ((cents - 10) >= 0)
		return (1 + check_cents(cents - 10));
	if ((cents - 5) >= 0)
		return (1 + check_cents(cents - 5));
	if ((cents - 2) >= 0)
		return (1 + check_cents(cents - 2));
	if ((cents - 1) >= 0)
		return (1 + check_cents(cents - 1));

	return (0);
}

/**
 * main - check amout of cents
 * @argc: argument count
 * @argv: argument variable
 * Return: always (0) success
 */

int main(int argc, char **argv)
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	if (c < 0 || !str_num(argv[1]))
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", check_cents(c));
	}
	return (0);

}
