#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/stat.h>

/**
 * create_file - create and append to file
 * @filename: pointer to filename
 * @text_content: content to be written to file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t c = 0;
	int f_exist;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	f_exist = access(filename, F_OK);
	fp = fopen(filename, "w");

	if (!fp)
		return (-1);

	if (!text_content)
	{
		fclose(fp);
		if (!f_exist)
		{
			if (chmod(filename, mode) != 0)
				return (-1);
		}
	}

	while (text_content[c])
		c++;

	if (c != fwrite(text_content, 1, c, fp))
		return (-1);

	fclose(fp);
	if (!f_exist)
	{
		if (chmod(filename, mode) != 0)
			return (-1);
	}

	return (1);
}
