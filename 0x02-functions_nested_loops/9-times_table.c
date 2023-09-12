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
_putchar('0');

for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
p = n * m;

if (p <= 9)
{
_putchar(' ');
_putchar('0' + p);
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
