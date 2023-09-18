#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Description: A program that generates random valid passwords
 * for the program 101-crackme.
 * Return: 0 for success.
 */

int main(void)

{
int sum = 0;
char c;
srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}

putchar(2772 - sum);

return (0);
}
