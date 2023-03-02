#include "main.h"

/**
 * leet - encodes string to leet
 * @s: string to be encoded
 * Return: char pointer
 */

char *leet(char *s)
{
	int cnt1 = 0;
	int cnt2 = 0;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (s[cnt1])
	{
		for (cnt2 = 0; cnt2 < 8; cnt2++)
		{
			if (s[cnt1] == leet[cnt2] || s[cnt1] + 32 == leet[cnt2])
			{
				s[cnt1] = cnt2 + 48;
			}
		}
		cnt1++;
	}
	return (s);
}
