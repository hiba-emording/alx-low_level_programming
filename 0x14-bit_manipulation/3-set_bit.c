#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 for success, or -1 for error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	set_value = 1;

	set_value <<= index;

	*n = *n | set_value;

	return (1);
}
