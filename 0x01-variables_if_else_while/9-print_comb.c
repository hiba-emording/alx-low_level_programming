#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all the single-digit numbers separated by a comma
* and a space, in ascending order.
* Using putchar only four times.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

/* N stands for the number */
int N;

/* counting from zero for ascending order */
for (N = 0; N <= 9; N++)
{

/* Converting it to its representation */
putchar(N + '0');

/* if its not the last number add comma and space */
if (N != 9)
{
putchar(',');
putchar(' ');
}

}

/* to be followed by newline */
putchar('\n');

return (0);

}

