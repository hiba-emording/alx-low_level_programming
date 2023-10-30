#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int descriptor, result, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	while (text_content[length])
	{
		length++;
	}

	descriptor = open(filename, O_WRONLY | O_APPEND, 0600);
	if (descriptor == -1)
	{
		return (-1);
	}

	result = write(descriptor, text_content, length);
	if (result == -1 || result != length)
	{
		close(descriptor);
		return (-1);
	}

	close(descriptor);
	return (1);
}
