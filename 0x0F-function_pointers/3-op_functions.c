#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add two ints
 * @a: first number
 * @b: second number
 * Return: result or null if fails
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracr two ints
 * @a: first number
 * @b: second number
 * Return: result or null if fails
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two ints
 * @a: first number
 * @b: second number
 * Return: result or null if fails
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: first number
 * @b: second number
 * Return: result or null if fails
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remaider two ints
 * @a: first number
 * @b: second number
 * Return: result or null if fails
 */

int op_mod(int a, int b)
{
	return (a % b);
}
