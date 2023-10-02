#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be found.
 *
 * Return: A pointer to the beginning of the located substring in 'haystack',
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
char *substringStart, *haystackChar, *needleChar;

	while (*haystack != '\0')
	{
		substringStart = haystack;

		haystackChar = haystack;

		needleChar = needle;

		while (*haystackChar != '\0' && *needleChar != '\0' &&
		*haystackChar == *needleChar)
		{
			haystackChar++;
			needleChar++;
		}

		if (*needleChar == '\0')
		{
			return (substringStart);
		}

		needleChar = needle - (haystackChar - substringStart) + 1;
		haystack = substringStart + 1;
		}

	return (NULL);
}
