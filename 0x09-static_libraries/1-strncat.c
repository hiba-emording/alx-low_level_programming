#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src.
 *
 * @dest: Destination string, where the result is stored.
 * @src: Source string to append to dest.
 * @n: Maximum number of bytes from src to append.
 *
 * This function appends at most n bytes from src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
