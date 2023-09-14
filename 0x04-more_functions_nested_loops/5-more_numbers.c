#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times,
 * followed by a new line.
 */

void more_numbers(void)

{

int i;
int n;

for (i = 0; i < 10; i++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar('0' + (n / 10));
		}
		_putchar('0' + (n % 10));
	}
_putchar('\n');
}

}
