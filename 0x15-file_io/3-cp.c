#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point for a programm copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or a corresponding exit code on failure.
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t reader;
char *file_from, *file_to, buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1], file_to = argv[2], fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from), exit(99);
	}
	while ((reader = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, reader) != reader)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from), close(fd_to), exit(99);
		}
	}
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		close(fd_from), close(fd_to), exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
