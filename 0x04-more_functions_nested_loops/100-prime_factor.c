#include "main.h"
#include <math.h>

/**
 * main - Entry pount.
 *
 * This program finds and prints the largest prime factor of a given number.
 * It iteratively factors the number, starting from 2,
 * and keeps track of the largest prime factor found.
 *
 * Return: 0 for success.
 */

int main(void)
{

long int number = 612852475143;
long int largest_prime_factor = -1;
long int factor;

while (number % 2 == 0)
{
largest_prime_factor = 2;
number /= 2;
}

for (factor = 3; factor <= sqrt(number); factor += 2)
{
while (number % factor == 0)
{
largest_prime_factor = factor;
number /= factor;
}
}

if (number > 1)
{
largest_prime_factor = number;
}

printf("%ld\n", largest_prime_factor);

return (0);
}
