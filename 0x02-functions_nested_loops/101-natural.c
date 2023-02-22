#include <stdio.h>

/**
 * main - print naturals of 3 & 5
 *
 * Return: (0) always
 */

int main(void)
{
	int comp = 0;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			comp += i;
		}
	}

	printf("%d\n", comp);
	return (0);
}
