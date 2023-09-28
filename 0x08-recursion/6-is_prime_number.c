#include "main.h"

int _prime(int n, int div);

/**
 * is_prime_number - Checks if an integer is a prime number using recursion.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}

/**
 * _prime - Assisting function to check if a number is prime recursively.
 * @n: The number to check.
 * @div: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int _prime(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}

	else if (div == 1)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (_prime(n, div - 1));
}
