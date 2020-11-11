#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: Number of arguments
 * @av: Muldimensional array of arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int fd, fd_1, bt, bt_1;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_1 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	bt = read(fd, buffer, 1024);
	if (bt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while (bt > 0)
	{
		bt_1 = write(fd_1, buffer, bt);
		if (bt_1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		bt = read(fd, buffer, 1024);
		if (bt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	}
	if (close(fd) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	if (close(fd_1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(100);
	return (0);
}
