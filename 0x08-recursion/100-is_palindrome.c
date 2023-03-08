#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int j = 0;
	int i = 0;

	return (_palindrome(s, i, &j));

}


/**
 * _palindrome - check if palindrome
 * @s: string to be checked
 * @i: value to check
 * @j: second value to check
 * Return: 1 if palindrome 0 if not
 */

int _palindrome(char *s, int i, int *j)
{
	if (!s[i])
		return (1);

	_palindrome(s, i + 1, j);

	if (s[*j] == s[i])
	{
		*j += 1;
		return (1);
	}

	return (0);
}
