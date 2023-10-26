#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 for success, or -1 for error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int clear_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	clear_value = 1;
	clear_value <<= index;
	clear_value = ~clear_value;
	*n = *n & clear_value;

	return (1);
}
