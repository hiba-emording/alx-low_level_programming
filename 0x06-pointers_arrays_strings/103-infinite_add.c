#include "main.h"

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: Pointer to the first number string.
 * @n2: Pointer to the second number string.
 * @r: Pointer to the buffer to store the result.
 * @size_r: Size of the result buffer.
 *
 * Return: Pointer to the result or 0 in case of overflow.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, carry = 0, sum, start, end, result_size = 0;
char temp;

	while (n1[i] != '\0')
	i++;
	while (n2[j] != '\0')
	j++;

	if (i >= size_r || j >= size_r)
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
		r[result_size] = (sum % 10) + '0';
		result_size++;
		i--;
		j--;
		if (result_size >= size_r)
		return (0);
	}
	r[result_size++] = '\0';

	for (start = 0, end = result_size - 1; start < end; start++, end--)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
