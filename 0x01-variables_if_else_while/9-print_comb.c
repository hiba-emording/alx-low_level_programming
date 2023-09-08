#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible combinations of single-digit numbers,
* separated by a comma and a space, in ascending order.
* Using putchar only 4 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* We declare variables */
int N1, N2;

/*
 * We use outer and inner loops one for numbers N2,
 *  and the other for character representation N1.
 */


for (N1 = 0; N1 <= 9; N1++)
{
for (N2 = 0; N2 <= 9; N2++)
{

/* convert N1 to its character representation */
putchar(N1 + '0');

/* if its not the last number we seprate by comma and space */
if (N1 != 9 || N2 != 9)
{
putchar(',');
putchar(' ');
}
}

}

/* followed by newlinw */
putchar('\n');

return (0);

}

