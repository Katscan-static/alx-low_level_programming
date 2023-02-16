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

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
}
