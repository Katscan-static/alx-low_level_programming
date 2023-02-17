#include <stdio.h>

/**
 *main - print z-a
 *
 *Return: Always (0) success
 */

int main(void)
{
	char c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}

	putchar(10);
	return (0);
}
