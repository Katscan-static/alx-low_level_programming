#include <stdio.h>

/**
 * main - print size of data types
 *
 * Return: always (0) success
 *
 */



int main(void)
{
	long long int lli;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of float: %lu byte(s)\n", (unsigned long) sizeof(float));
}
