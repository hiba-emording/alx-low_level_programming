#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet,
 * followed by the uppercase alphabet,
 * and then a newline character.
 *Using the `putchar` function only three times.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);

}

