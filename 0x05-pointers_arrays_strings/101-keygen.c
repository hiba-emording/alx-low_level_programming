#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Description: a program that generates random valid passwords,
 * for the program 101-crackme.
 * Return: 0 for success.
 */

int main(void)
{
int sum;
char c;
srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}

putchar(7777 - sum);

return (0);
}
