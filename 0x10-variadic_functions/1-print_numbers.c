#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @seperator: seperator
 * @n: number of args
 * @...; args
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (!seperator)
		seperator = "";

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(list, int), seperator);
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
