#include <stdio.h>

/**
 *main - print singile digit numbers
 *
 *Return: always (0) success
 *
 */

int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);
}
