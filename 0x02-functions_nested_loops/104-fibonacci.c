#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the first 98 Fibonacci numbers,
 * separated by a comma and space.
 * Followed by newline.
 *
 * Return: 0 (Success)
 */

int main(void)

{
/* count is number of Fibonacci numbers to print */
int count = 98;

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
