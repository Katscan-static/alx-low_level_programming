#include <stdio.h>


/**
 *main - print a-z using putchar
 *
 *Return: Always (0) success
 */

int main(void)
{
	char c = 97;

	for (; c <= 122 ; )
	{
		putchar(c);
		c++;
	}

	putchar(10);
	return (0);

}
