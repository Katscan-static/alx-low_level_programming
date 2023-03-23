#include <stdarg.h>


/**
 * sum_them_all - add all argumrnts
 * @n: arguments number
 * @...: more arguments
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i = 0, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
