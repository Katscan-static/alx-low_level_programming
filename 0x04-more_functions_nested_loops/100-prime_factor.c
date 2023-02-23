#include <stdio.h>

/**
 * main - find prime factor
 * Return: Always (0) success
 */

int main(void)
{
	long int v = 612852475143;
	long int i = 2;

	for (; i < v; i++)
	{
		if (v % i == 0)
		{
			v = v / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
