#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be analyzed.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of 's' that consist
 *         only of bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)

{
unsigned int length = 0;
int i, match;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			match = 0;

			if (*s == accept[i])
			{

				length++;
				match = 1;
				break;
			}
		}

	if (!match)
	{
		break;
	}

	s++;
	}

	return (length);
}
