#include "main.h"

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
int i = 0, j = 0, carry = 0, sum, start, end, result_size = 0;
char temp;

	while (n1[i] != '\0')
	i++;
	while (n2[j] != '\0')
	j++;

	if (i >= size_result || j >= size_result)
	return (0);
	i--;
	j--;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
		sum += n1[i] - '0';
		if (j >= 0)
		sum += n2[j] - '0';
		carry = sum / 10;
		result[result_size] = (sum % 10) + '0';
		result_size++;
		i--;
		j--;
		if (result_size >= size_result)
		return (0);
	}
	result[result_size++] = '\0';

	for (start = 0, end = result_size - 1; start < end; start++, end--)
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
	}

	return (result);
}
