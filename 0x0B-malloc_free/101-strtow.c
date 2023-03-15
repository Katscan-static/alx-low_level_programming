#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - string to words
 * @s: string to be converted
 * Return: NULL if str == NULL || str == "", pointer if success
 */

char **strtow(char *s)
{
	int i = 0, wc = 0, j = 0, cnt;
	int *n;
	char **p;

	if (!(*s) || !s)
		return (NULL);

	while (s[i])

		if (s[i] != ' ' && s[i - 1] == ' ')
			wc++;
		i++;
	}

	n = malloc(sizeof(int) * wc);

	if (!n)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		cnt = 0;
		while (s[j] == ' ')
			j++;
		if (s[j] != ' ' && s[j - 1] == ' ')
		{
			while (s[j] != ' ')
			{
				cnt++;
				j++;
			}
			n[i] = cnt;
		}
	}
	p = NULL;
	return (split_str(n, p, s, wc));
}

/**
 * split_str - split string to words
 * @n: word length array
 * @p: double pointer
 * @s: string to be split
 * @wc: word count
 * Return: NULL of failer double pointer on success
 */
char **split_str(int *n, char **p, char *s, int wc)
{
	int i, j, cnt, k;

	p = malloc(wc * sizeof(char *) + 1);
	if (!p)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		p[i] = malloc(n[i] * sizeof(char) + 1);

		if (!p[i])
		{
			for (k = 0; k < i; k++)
				free(p[i]);
			free(p);
		}
	}
	j = 0;
	for (i = 0; i < wc; i++)
	{
		cnt = 0;
		while (s[j] == ' ')
			j++;
		if (s[j] != ' ' && s[j - 1] == ' ')
		{
			while (s[j] != ' ' && s[j])
			{
				p[i][cnt] = s[j];
				cnt++;
				j++;
			}
			p[i][j] = '\0';
		}
	}
	free(n);
	if (!wc)
		return (NULL);
	return (p);
}


