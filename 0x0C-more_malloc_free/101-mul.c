#include "main.h"

int main(int argc, char *argv[]);

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * _isdigit - Checks whether a character is a digit (0 through 9).
 *
 * @c: character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The integer value of the string, or 0 if no valid integer is found.
 */

int _atoi(char *s)
{

unsigned int n = 0;
int sign = 1;

while (*s)

{
if (*s == '-')
{
	sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
n = (n * 10) + (*s - '0');
}
else if (n > 0)
{
	break;
}
s++;
}

return (n *sign);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
int i, num1, num2, result, divisor, temp;

	if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
	{
		char error_message[] = "Error\n";

		for (i = 0; error_message[i] != '\0'; i++)
		{
			_putchar(error_message[i]);
		}
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = multiply(num1, num2);

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		if (result < 0)
		{
			_putchar('-');
			result = -result;
		}
		divisor = 1;
		temp = result;
		while (temp > 9)
		{
			temp /= 10;
			divisor *= 10;
		}
		while (divisor > 0)
		{
			_putchar((result / divisor) + '0');
			result %= divisor;
			divisor /= 10;
		}
	}

	_putchar('\n');
	return (0);
}
