#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number, extracts its last digit,
 * and prints information about the last digit.
 * Return: Always 0 to indicate success.
 */

int main(void)
{
int n;
int LD;

srand(time(0));
n = rand();

/* LD is last digit */

LD = n % 10;

printf("Last digit of %d is %d", n, LD);

if (LD > 5)
{
printf(" and is greater than 5\n");
}
else if (LD == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}

