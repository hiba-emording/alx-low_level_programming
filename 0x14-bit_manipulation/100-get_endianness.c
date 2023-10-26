#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */

int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

	if (*endian == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
