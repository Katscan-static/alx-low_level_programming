#include <stdio.h>


/**
 * print_even - print even numbers in fibonacci series
 * @c: number to be printed
 */

void print_even(unsigned long int c);

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


	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{
			print_even(a);
		}
		else if (i == 1)
		{
			print_even(b);
		}
		if (i >= 2 && (i  == 0 || i % 2 == 0))
		{
			a += b;
			print_even(a);
		}
		else if (i == 97)
		{
			b += a;
			print_even(b);
		}
		else if (i > 2)
		{
			b += a;
			print_even(b);
		}
	}

	return (0);

}

/**
 * print_even - print even numbers in fibonacci series
 * @c: number to be printed
 */

void print_even(unsigned long int c)
{
		printf("%lu, ", c);
}
