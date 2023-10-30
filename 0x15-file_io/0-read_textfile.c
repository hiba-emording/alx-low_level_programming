#include "main.h"

/**
 * read_textfile - Reads a text file and prints content to the standard output.
 * @filename: Name of the file to read.
 * @letters: The maximum number of characters (letters) to read and print.
 *
 * Return: On success, the number of characters read and printed is returned.
 *         If the file cannot be opened or read,
 *         or if any write errors occur, 0 is returned.
 *
 *         If 'filename' is NULL, 0 is also returned.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int descriptor, reader, written;
char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(descriptor, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, reader);
	if (written == -1 || written != reader)
	{
		free(buffer);
		close(descriptor);
		return (0);
	}

	free(buffer);
	close(descriptor);
	return (written);
}
