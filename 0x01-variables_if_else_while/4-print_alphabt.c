#include <stdio.h>

/**
 *main - print a-z except e and q
 *
 *Return: Always (0) success
 */

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}

		c++;
	}

	putchar(10);
	return (0);
}
