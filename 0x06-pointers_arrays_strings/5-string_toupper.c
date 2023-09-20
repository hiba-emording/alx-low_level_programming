#include "main.h"

/**
 * string_toupper - Convert lowercase letters in a string to uppercase.
 *
 * @str: Pointer to the input string.
 *
 * This function converts all lowercase letters,
 * in the input string to uppercase.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}

	return (str);
}
