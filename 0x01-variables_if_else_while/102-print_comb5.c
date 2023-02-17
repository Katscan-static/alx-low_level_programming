#include <stdio.h>

/**
 *main - print combinations
 *
 *Return: Always (0) success
 *
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (a = b + 1; b <= 99; b++)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(32);
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);

			if (a == 98 && b == 99)
			{
				continue;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
