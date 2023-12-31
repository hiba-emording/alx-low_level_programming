#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and space.
 *
 * Return: 0 (Success)
 */

int main(void)

{
/* count is number of Fibonacci numbers to print */
int count = 50;

/* declare first and second numbers */
unsigned long first = 1, second = 2, next;

/*declare counter */
int i;

/* Print the first two Fibonacci numbers */
printf("%lu, %lu", first, second);

/* Calculate and print the remaining Fibonacci numbers */
/* value of first and second updated */
for (i = 3; i <= count; i++)
{
next = first + second;
printf(", %lu", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
