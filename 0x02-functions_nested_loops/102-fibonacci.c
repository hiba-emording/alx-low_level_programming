#include "main.h"

/**
 * main - Entery point.
 *
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and space.
 * followed by a newline.
 *
 * Return = 0 for success.
 */

int main(void)

{
/* count is number of Fibonacci numbers to print */
int count = 50;

/* declare first and second numbers */
int first = 1, second = 2, next;

/*declare counter */
int i;

/* Print the first two Fibonacci numbers */
printf("%d, %d", first, second);

/* Calculate and print the remaining Fibonacci numbers */
/* value of first and second updated */
for (i = 3; i <= count; i++)
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
