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

	for (i = 0; i < 48; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			a += b;
			printf("%lu, ", a);
		}
		else if(i == 47)
		{
			b += a;
			printf("%lu\n",b);
		}
		else
		{
			b += a;
			printf("%lu, ", b);
		}
	}

	return (0);

}
