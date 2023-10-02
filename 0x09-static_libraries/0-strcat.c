#include "main.h"

/**
 * _strcat - Concatenate two strings.
 *
 * @dest: Destination string, where the result is stored.
 * @src: Source string to append to dest.
 *
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte ('\0') at the end of dest, and then adds
 * a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)

{
char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
