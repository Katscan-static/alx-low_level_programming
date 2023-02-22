#include <stdio.h>

/**
 * main - Fibinacci series till
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;


	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%lu, ", a);
		}
		else if (i == 1)
		{
			printf("%lu, ", b);
		}
		if (i >= 2 && (i  == 0 || i % 2 == 0))
		{
			a += b;
			printf("%lu, ", a);
		}
		else if (i == 49)
		{
			b += a;
			printf("%lu\n", b);
		}
		else if (i > 2)
		{
			b += a;
			printf("%lu, ", b);
		}
	}

	return (0);

}
