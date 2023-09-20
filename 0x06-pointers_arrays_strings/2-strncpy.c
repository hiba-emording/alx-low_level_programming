#include "main.h"

/**
 * _strncpy - Copy at most n characters from src to dest.
 *
 * @dest: Destination string where the result is stored.
 * @src: Source string to copy from.
 * @n: Maximum number of characters to copy.
 *
 * This function copies at most n characters from src string to dest string.
 * If the src string is shorter than n, the remaining characters in dest
 * are filled with null bytes ('\0').
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
