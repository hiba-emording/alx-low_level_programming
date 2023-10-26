#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
unsigned long int temp;
int move;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, move = 0; (temp >>= 1) > 0; move++)
	;

	for (; move >= 0; move--)
	{
		if ((n >> move) & 1)
		{
			_putchar('1');
		}

		else
		{
			_putchar('0');
		}
	}
}
