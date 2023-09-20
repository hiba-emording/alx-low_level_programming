#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * This function prints the integer `n` to the standard output.
 */

void print_number(int n)

{
unsigned int u;

	if (n < 0)
	{
		u = -n;
		_putchar('-');
	}
	else
	{
		u = n;
	}

	if (u / 10 != 0)
	{
		print_number(u / 10);
	}

	_putchar(u % 10 + '0');
}
