#include "main.h"

/**
 * _strcmp - Compare two strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * This function compares the two strings s1 and s2.
 *
 * Return: An integer less than, equal to, or greater than zero, depending on
 *         whether s1 is less than, equal to, or greater than s2.
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 != '\0')
	{
		return (1);
	}

	else if (*s2 != '\0')
	{
		return (-1);
	}

	return (0);
}
