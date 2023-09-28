#include "main.h"

int _palindrome(char *s, int length);


/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{

int length = _strlen_recursion(s);

return (_palindrome(s, length));

}

/**
 * _palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check.
 * @length: The length of the string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int _palindrome(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}

	if (s[0] != s[length - 1])
	{
		return (0);
	}

	return (_palindrome(s + 1, length - 2));
}
