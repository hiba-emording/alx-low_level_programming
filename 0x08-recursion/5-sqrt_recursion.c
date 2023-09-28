#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number,
 * using recursion.
 * @n: The number for which to calculate the square root.
 *
 * Return: The square root of n,or -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

/**
 * _sqrt_recursive - Recursive function to find the square root,
 * using binary search.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of the number if found,
 * or -1 if it does not have a natural square root.
 */

	int _sqrt_recursive(int guess)
	{
		if (guess * guess == n)
		{
			return (guess);
		}

		else if (guess * guess > n)
		{
			return (-1);
		}

		else
		{
			return (_sqrt_recursive(guess + 1));
		}
	}

	return (_sqrt_recursive(1));
}
