#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
unsigned int u = n;

	if (n < 0)
	{
		_putchar('-');
		u = -u;
	}

		if (u / 10 != 0)
		{
			print_number(u / 10);
		}

_putchar((u % 10) + '0');
}
