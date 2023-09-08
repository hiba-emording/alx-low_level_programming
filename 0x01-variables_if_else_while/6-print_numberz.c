#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10,
 * starting from 0 and followed by a new line.
 * Using putcher function only twice.
 *
 * Return: Always 0 to indicate success.
 */
int main(void)

{

int digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}

putchar('\n');

return (0);
}

