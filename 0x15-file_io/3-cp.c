#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * close_files - closes files and handles error
 * @from: file copied from
 * @to: file to copy to
 */
void close_files(int from, int to)
{
	if (close(from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", from);
		exit(100);
	}
	if (close(to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", to);
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
	int nread = 1024;
	int f_from, f_to;
	struct stat st;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	if (access(av[1], F_OK) == -1 || access(av[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_from = open(av[1], O_RDONLY);
	if (fstat(f_from, &st) < 0)
	{
		close(f_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0664);
	if (f_from < 0 || f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s", av[2]);
		exit(99);
	}
	while (nread == 1024)
	{
		nread = read(f_from, buf, 1024);
		if (write(f_to, buf, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s", av[2]);
			exit(99);
		}
		memset(buf, 0, 1024);
	}
	close_files(f_from, f_to);
	return (0);
}
