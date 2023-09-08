#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet followed by a newline
 * using only two putchar calls.
 *
 * Return: Always 0 to indicate success.
  */


int main(void)

{

char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);

}

