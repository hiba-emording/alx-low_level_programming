#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program prints the first 98 Fibonacci numbers,
 * separated by a comma and space.
 * Started with 1 and 2 .
 * Followed by newline.
 *
 * Return: 0 (Success).
 */

int main(void)

{
int i;
unsigned long fibonacci_1 = 1, fibonacci_2 = 2, next;

for (i = 0; i < 98; i++)

{
printf("%lu", fibonacci_1);
if (i < 97)
printf(", ");

next = fibonacci_1 + fibonacci_2;
fibonacci_1 = fibonacci_2;
fibonacci_2 = next;
}

printf("\n");
return (0);
}
