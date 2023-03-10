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
	int i = 0;
	int j = cents;

	while (j > 0)
	{
		if ((j - 25) >= 0)
		{
			j -= 25;
			i += 1;
		}
		else if ((j - 10) >= 0)
		{
			j -= 10;
			i += 1;
		}
		else if ((j - 5) >= 0)
		{
			j -= 5;
			i += 1;
		}
		else if ((j - 2) >= 0)
		{
			j -= 2;
			i += 1;
		}
		else if ((j - 1) >= 0)
		{
			j -= 1;
			i += 1;
		}
	}
	return (i);
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
