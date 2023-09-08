#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10,
 * starting from 0 and followed by a new line.
 *
 * Return: Always 0 to indicate success.
 */

int main(void)

{

int number = 0;

while (number <= 9)
{
printf("%d\n", number);
number++;
}

return (0);

}
