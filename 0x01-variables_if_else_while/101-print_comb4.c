#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible different combinations of three digits,
* separated by ,, followed by a space, in ascending order.
* Using putchar only 6 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{
/* declare variables */
int digit1, digit2, digit3;

/* 3 nested for loops starts from zero to ensure ascending order */
/* +1 to ensure difference */
for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)

/* convert to their character representation */
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');

/* if its the last number add add a comma and space */
if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

/* Print a newline */
putchar('\n');

return (0);

}

