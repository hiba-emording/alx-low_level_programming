#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *This program prints the lowercase alphabet,
 *excluding 'e' and 'q',
 * followed by a newline,
 *using the `putchar` function only twice.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)
{

char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{

putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}

