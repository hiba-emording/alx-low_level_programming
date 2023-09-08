#include <stdio.h>

/**
* main - Entry point of the program
*
* This program prints all the numbers of base 16 in lowercase,
* followed by a new line, using only three putchar calls.
*
* Return: Always 0 to indicate success.
*/

int main(void)

{

char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');

return (0);

}

