#include <stdio.h>

/**
 * main - Entry point.
 *
 * This program prints the name of the current source file using the __FILE__
 * predefined macro.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{

	printf("%s\n", __FILE__);

	return (0);
}
