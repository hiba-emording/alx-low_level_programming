#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */

void print_numbers(void)
{
char number = '0';
while (number <= '9')
	{
	_putchar(number);
	number++;
	}
_putchar('\n');
}
