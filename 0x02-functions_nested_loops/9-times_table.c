#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
/* n for the number, m for multiple and p for production */
int n, m, p;

for (n = 0; n <= 9; n++)
{

for (m = 0; m <= 9; m++)
{

p = n * m;

if (p <= 9)
{
_putchar(p + '0');
_putchar(',');
_putchar(' ');
}

else
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}

}

_putchar('\n');
}

}
