#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

/**
 * close_files - closes files and handles error
 * @from: file copied from
 * @to: file to copy to
 */
void close_files(FILE *from, FILE *to)
{
	if (fclose(from) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fileno(from));
		exit(100);
	}
	if (fclose(to) != 0)
	{
		fprintf(stderr, "Error: Can't close fd %d", fileno(to));
		exit(100);
	}
}

/**
 * main - entry point
 * @ac: argument count
 * @av: argument variable
 *
 * Return: 0 always success
 */
int main(int ac, char **av)
{
	char buf[1024];
	size_t nread = 1024;
	FILE *f_from, *f_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	if (access(av[1], F_OK) == -1 || access(av[1], R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_from = fopen(av[1], "r");
	f_to = fopen(av[2], "w");
	if (!f_from || !f_to)
	{
		fprintf(stderr, "Error: Can't write to  %s\n", av[2]);
		exit(99);
	}
	while (nread == 1024)
	{
		nread = fread(buf, 1, 1024, f_from);
		if (fwrite(buf, 1, nread, f_to) != nread)
		{
			fprintf(stderr, "Error: Can't write to  %s\n", av[2]);
			exit(99);
		}
		memset(buf, 0, 1024);
	}
	chmod(av[2], mode);
	close_files(f_from, f_to);
	return (0);
}
