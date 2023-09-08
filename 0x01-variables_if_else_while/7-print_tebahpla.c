#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints the lowercase alphabet in reverse,
* followed by a new line,
* using only two putchar calls.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);

}

