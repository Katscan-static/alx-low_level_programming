#include <stdio.h>

/**
 *main - print 0-9 seperated by commas and space
 *
 *Return: Always (0) success
 *
 */

int main(void)
{
	short int c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(44);
			putchar(32);
		}

		c++;
	}

	putchar(10);
	return (0);
}
