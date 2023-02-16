#include <stdio.h>
#include <unistd.h>

/**
 * main - print using write
 *
 * Return: 1
 *
 */

int main(void)
{
	char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\r\n";

	write(1, t, 62);
	return (1);
}
