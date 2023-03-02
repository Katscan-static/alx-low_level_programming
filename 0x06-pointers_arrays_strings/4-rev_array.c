#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array
 * @a: array to be reversed
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp1;
	int temp2;

	--n;

	for (i = 0; i <= n / 2; i++)
	{
		temp1 = *(a + i);
		temp2  = *(a + (n - i));
		a[n - i] = temp1;
		a[i] = temp2;
	}
}
