#include "main.h"
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
unsigned long fibonacci_1_half1, fibonacci_1_half2,
fibonacci_2_half1, fibonacci_2_half2;
unsigned long half1, half2;
for (i = 0; i < 92; i++)
{
next = fibonacci_1 + fibonacci_2;
printf("%lu, ", next);
fibonacci_1 = fibonacci_2;
fibonacci_2 = next;
}
fibonacci_1_half1 = fibonacci_1 / 10000000000;
fibonacci_2_half1 = fibonacci_2 / 10000000000;
fibonacci_1_half2 = fibonacci_1 % 10000000000;
fibonacci_2_half2 = fibonacci_2 % 10000000000;
for (i = 93; i < 99; i++)
{
half1 = fibonacci_1_half1 + fibonacci_2_half1;
half2 = fibonacci_1_half2 + fibonacci_2_half2;
if (fibonacci_1_half2 + fibonacci_2_half2 > 9999999999)
{
half1 += 1;
half2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (i != 98)
printf(", ");
fibonacci_1_half1 = fibonacci_2_half1;
fibonacci_1_half2 = fibonacci_2_half2;
fibonacci_2_half1 = half1;
fibonacci_2_half2 = half2;
}
printf("\n");
return (0);
}
