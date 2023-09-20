#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string.
 *
 * @str: Pointer to the input string.
 *
 * This function capitalizes the first letter of each word in the input string,
 * where words are separated by space,
 * tabulation, newline, comma, semicolon, period,
 * exclamation mark, question mark, double quote, parentheses, and braces.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{

int i;
int j;
char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; str[i] != '\0'; i++)
{

	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	for (j = 0; separators[j] != '\0'; j++)
	{

		if (str[i] == separators[j])
		{

			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
}

	return (str);
}
