#include <stdio.h>


/**
 * print_even - print even numbers in fibonacci series
 * @c: number to be printed
 * Return: value if even
 */

int print_even(unsigned long int c);

/**
 * main - Fibinacci series till
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	unsigned long int con = 4000000;
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;
	int test = 0;


	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{

		}
		else if (i == 1)
		{

			test += print_even(b);
		}
		if (i >= 2 &&   i % 2 == 0)
		{
			a += b;
			test += print_even(a);
		}
		else if (a > con ||  b > con)
		{
			printf("%d\n", test);
			break;
		}
		else if (i > 2 && i % 2 != 0)
		{
			b += a;
			test += print_even(b);
		}
	}

	return (0);

}

/**
 * print_even - print even numbers in fibonacci series
 * @c: number to be printed
 * Return: value if even
 */

int print_even(unsigned long int c)
{

	if (c % 2 == 0 && c <= 4000000)
	{
		return (c);

	}
	else
	{
		return (0);
	}

}
