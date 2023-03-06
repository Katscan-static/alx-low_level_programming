#include "main.h"

/**
 * _strstr - finds a substring in a string
 * @haystack: the string to be searched
 * @needle: the string to search for
 * Return: pointer to start of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		while (needle[i])
		{
			if (*haystack && *haystack == needle[i])
			{
				haystack++;
				i++;
			}
			else if (*haystack && *haystack != needle[i])
			{
				i = 0;
				break;
			}
		}
		if (i > 0 && *haystack)
		{
			return (haystack -= i);
		}
		haystack++;
	}


	return (0);
}
