#include <stdio.h>

/**
 * main - print numbers base 16
 *
 * Return: Always (0) success
 */

int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	c = 97;

	while (c <= 102)
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);
}
