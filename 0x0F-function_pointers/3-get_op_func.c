#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - get operator func
 * @s: op signage
 * Return: result
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;

	}
	return (NULL);
}
