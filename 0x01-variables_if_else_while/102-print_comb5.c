#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all possible combinations of two two-digit numbers,
* separated by a comma and a space, in ascending order.
* Using putchar only 8 times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* N1 and N2 stands for two digits numbers */
int N1, N2;

/* 2 nested for loops starts from zero to ensure ascending order */
for (N1 = 0; N1 <= 99; N1++)

/* N2 starts from N1+1 to ensure difference */
{
for (N2 = N1 + 1; N2 <= 99; N2++)
{

/* Print the current combination of two-digit numbers */
/* Seperated by space */
putchar(N1 / 10 + '0');
putchar(N1 % 10 + '0');
putchar(' ');
putchar(N2 / 10 + '0');
putchar(N2 % 10 + '0');

/* if it's not the last combination add a comma and space */
if (N1 != 98 || N2 != 99)
{
putchar(',');
putchar(' ');
}
}

}

/* Print a newline */
putchar('\n');

return (0);

}

