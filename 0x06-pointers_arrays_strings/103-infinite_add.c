#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number represented as a string.
 * @n2: Second number represented as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the result buffer.
 *
 * Return: 0 if the result cannot be stored in r,
 * otherwise a pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int index_n1, index_n2, result_index, result_secondary_index;
int carry, temp_sum, swap;

	for (index_n1 = 0; n1[index_n1]; index_n1++)
	;
	for (index_n2 = 0; n2[index_n2]; index_n2++)
	;
	if (index_n1 > size_r || index_n2 > size_r)
		return (0);
	carry = 0;
	for (index_n1 -= 1, index_n2 -= 1, result_index = 0;
	result_index < size_r - 1; index_n1--, index_n2--, result_index++)
	{
		temp_sum = carry;

		if (index_n1 >= 0)
			temp_sum += n1[index_n1] - '0';

		if (index_n2 >= 0)
			temp_sum += n2[index_n2] - '0';

		if (index_n1 < 0 && index_n2 < 0 && temp_sum == 0)
		{
			break;
		}
		carry = temp_sum / 10;
		r[result_index] = temp_sum % 10 + '0';
	}
	r[result_index] = '\0';
	if (index_n1 >= 0 || index_n2 >= 0 || carry)
		return (0);
	for (result_index -= 1, result_secondary_index = 0;
	result_secondary_index < result_index;
	result_index--, result_secondary_index++)
	{
		swap = r[result_index];
		r[result_index] = r[result_secondary_index];
		r[result_secondary_index] = swap;
	}
	return (r);
}
