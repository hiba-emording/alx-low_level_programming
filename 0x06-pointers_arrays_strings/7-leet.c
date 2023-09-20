#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * This function replaces specific letters in the input string with their
 * corresponding leet substitutions: a/A with 4, e/E with 3, o/O with 0,
 * t/T with 7, and l/L with 1.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)

{

char leet_chars[] = "aAeEoOtTlL";
char leet_subs[] = "4433007711";
int i;
int j;

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; leet_chars[j] != '\0'; j++)
		{

			if (str[i] == leet_chars[j])
			{
				str[i] = leet_subs[j];
				break;
			}
		}
	}

	return (str);
}
