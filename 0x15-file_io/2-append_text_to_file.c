#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t c = 0;

	if (!filename)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (access(filename, W_OK) == -1)
		return (-1);

	fp = fopen(filename, "a");
	if (!fp)
		return (-1);

	if (!text_content)
	{
		fclose(fp);
		return (1);
	}

	while (text_content[c])
		c++;

	if (c != fwrite(text_content, 1, c, fp))
		return (-1);

	fclose(fp);
	return (1);
}
