#include <stdio.h>

/**
 * main - print 3 number unique combination
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	short int a;
	short int b;
	short int c;
	short int of1 = 1;
	short int of2 = 2;
	short int of3 = 2;

	for (a = 48 ; a < 56 ; a++)
	{
		for (b = 48 + of1 ; b < 57 ; b++)
		{
			for (c = 48 + of2 ; c < 58 ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a == 55 && b == 56 && c == 57)
				{
					putchar(10);
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
			of2++;
		}
		of1++;
		of3++;
		of2 = of3;
	}

	return (0);
}
