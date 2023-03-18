#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_num - prints whithout starting 0's
 * @s: num string to be printed
 */

void print_num(char *s)
{
	int i = 0;

	while (s[i] == '0')
		i++;

	for (; s[i]; i++)
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * write_rem - writes remainder to pointer p
 * @p: pinter to be written to
 * @l: the value of l
 * @rem: the remainder
 * retun
 */

void write_rem(char *p, int l, int rem)
{
	p[l] = (rem % 10 + 48);

	if (!(rem / 10))
		return;

	write_rem(p, l - 1, rem / 10);
}

/**
 * mult - multiply two numbers string
 * @s1: first string number
 * @s2: second string number
 */

void mult(char *s1, char *s2)
{
	int i = 0, j = 0, rem = 0, c1, c2, l, tmp, tmp1;
	char mulx, *p;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;

	p = malloc(sizeof(char) * l + 1);

	if (!p)
		return;

	for (c1 = 0; c1 < l; c1++)
		p[c1] = '0';

	p[l] = '\0';
	c1 = i - 1;
	for (tmp1 = 0; c1 >= 0; c1--, tmp1++)
	{
		tmp = l - tmp1 - 1;
		rem = 0;
		c2 = j - 1;
		for (; c2 >= 0; c2--, tmp--)
		{
			mulx = ((s1[c1] - '0') * (s2[c2] - '0')) + (p[tmp] - '0') + rem;
			rem = mulx / 10;
			p[tmp] = (mulx % 10 + '0');
		}

		if (rem > 0)
			write_rem(p, tmp, rem);
	}
	print_num(p);
}

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

	if (ac != 3 || !(check_num(av[1]) && check_num(av[2])))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (check_num(av[1]) && check_num(av[2]))
		{

			mult(av[1], av[2]);
		}
	}

	return (0);
}
