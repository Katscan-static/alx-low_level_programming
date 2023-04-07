#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

/**
 * read_textfile - read textfile
 * @filename: name of the file
 * @letters: number od letters
 *
 * Return: number of characters else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t cnt = 0;
	char c;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	while (((c = fgetc(fp)) != EOF) && (cnt != letters))
	{
		if (write(1, &c, 1) == 1)
			;
		else
			return (0);

		cnt++;
	}

	return ((ssize_t)(cnt));

}
