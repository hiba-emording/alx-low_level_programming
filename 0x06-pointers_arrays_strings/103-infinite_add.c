#include "main.h"

/**
 * reverse_string - Reverse a null-terminated string.
 * @str: Pointer to the string to be reversed.
 */

void reverse_string(char *str)

{
int length = 0;
int i;
char temp;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: Pointer to the first number string.
 * @n2: Pointer to the second number string.
 * @result: Pointer to the buffer to store the result.
 * @size_result: Size of the result buffer.
 *
 * Return: Pointer to the result or 0 in case of overflow.
 */

char *infinite_add(char *n1, char *n2, char *result, int size_result)

{
int overflow = 0;
int i = 0, j = 0, digit_count = 0;
int value1 = 0, value2 = 0, temp_sum = 0;

	while (n1[i] != '\0')
	{
		i++;
	}

	while (n2[j] != '\0')
	{
		j++;
	}

	i--;
	j--;

	if (i >= size_result || j >= size_result)
	{
		return (0);
	}

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		value1 = (i >= 0) ? (n1[i] - '0') : 0;
		value2 = (j >= 0) ? (n2[j] - '0') : 0;
		temp_sum = value1 + value2 + overflow;

		if (temp_sum >= 10)
		{
			overflow = 1;
		}

		else
		{
			overflow = 0;
		}

		if (digit_count >= (size_result - 1))
		{
			return (0);
		}

		result[digit_count] = (temp_sum % 10) + '0';
		digit_count++;
		j--;
		i--;
	}

	result[digit_count] = '\0';
	reverse_string(result);
	return (result);
}
