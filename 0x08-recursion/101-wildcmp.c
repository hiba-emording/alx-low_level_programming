#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard handling using recursion.
 * @s1: The first string.
 * @s2: The second string with wildcard (*).
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}

	if (*s2 == '*')
	{
		return ((wildcmp(s1, s2 + 1) || (s1 && wildcmp(s1 + 1, s2))));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
