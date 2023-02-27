#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be printed in reverse
 */

void rev_string(char *s)
{
	int count = 0;
	char *temp;
	int j;

	while (*s++)
	{
		count++;

	}

	s -= (count + 1);
	for (j = count; j >= 0; j--)
	{
		if (s[j])
		{
			*temp++ = s[j];

		}
	}

	j = (count + 1);
	do {

		if (s[j])
		{
			s[j] = *--temp;


		}
	} while (j-- >= 0);
}

