#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible different combinations of two digits,
* separated by a comma and a space, in ascending order.
* Using putchar only 5 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* Declaring variables */
int digit1, digit2;

/* outer loop from 0 to 8 to ensure ascending order */
for (digit1 = 0; digit1 <= 8; digit1++)
{

/* inner loop from 0 to 9 to ensure ascending order */
/* digit2 starts +1 to ensure diffrencies */
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{

/* converting to to their character representation */
putchar(digit1 + '0');
putchar(digit2 + '0');

/* if its not the last combination 89 print comma and space */
if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}

}

}

putchar('\n');

return (0);

}

