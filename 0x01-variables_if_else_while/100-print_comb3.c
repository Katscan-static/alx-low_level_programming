#include <stdio.h>

/**
 * main - print 2 number combinations
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	char a = 48;
	char b;
	char offset = 1;

	while (a <= 56)
	{
		b = 48 + offset;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if ((a != 56) && (b != 58))
			{
				putchar(44);
				putchar(32);
			}

			b++;
		}

		a++;
		offset++;
	}

	putchar(10);
	return (0);

}
