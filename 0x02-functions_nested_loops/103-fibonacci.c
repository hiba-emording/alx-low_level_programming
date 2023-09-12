#include "main.h"

/**
 * main - Entry point of the program.
 *
 * This program finds and prints the sum of even-valued terms in the Fibonacci
 * sequence that do not exceed 4000000.
 *
 * Return: 0 (Success)
 */

int main(void)

{
unsigned long a = 1, b = 2, c;
unsigned long sum = 0;

while (a <= 4000000)
{
if (a % 2 == 0)
{
sum += a;
}

c = a + b;
a = b;
b = c;
}

printf("%lu\n", sum);

return (0);
}
