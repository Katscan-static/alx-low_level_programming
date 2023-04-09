#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

/**
 * close_files - closes files and handles error
 * @from: file copied from
 * @to: file to copy to
 * @nread: characters read
 * @buf: buffer
 * @av: argument variable
 */
void close_files(int from, int to, int nread, char *buf, char **av)
{
	while (nread == 1024)
	{
		nread = read(from, buf, 1024);
		if (write(to, buf, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s", av[2]);
			exit(99);
		}
		memset(buf, 0, 1024);
	}
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
	int f_from, f_to, nread = 1024, f_exist;
	mode_t mode = S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IWOTH;

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
	f_exist = access(av[2], F_OK);
	f_from = open(av[1], O_RDONLY);
	if (f_from < 0)
	{
		close(f_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (f_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s", av[2]);
		exit(99);
	}
	if (f_exist < 0)
	{
		if (chmod(av[2], mode))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s", av[2]);
			exit(99);
		}
	}
	close_files(f_from, f_to, nread, buf, av);
	return (0);
}
