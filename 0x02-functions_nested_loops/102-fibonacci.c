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
	printf("1 ,2 ,");

	for (i = 0; i < 50; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			a += b;
			printf("%lu, ", a);
		}
		else
		{
			b += a;
			printf("%lu, ", b);
		}
	}

	return (0);

}
