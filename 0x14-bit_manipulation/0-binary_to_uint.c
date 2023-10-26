#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: A pointer to the binary string to be converted.
 *
 * Return: The converted unsigned int or 0 if there are invalid characters,
 * in the string or if the input string is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int pwr, len, i;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;
	pwr = 1;
	len = 0;

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		result += pwr;
		pwr *= 2;
	}

	return (result);
}
