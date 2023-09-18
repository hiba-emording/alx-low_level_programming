#include "main.h"
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 20

/**
 * main - Entry point.
 * Description: a program that generates random valid passwords,
 * for the program 101-crackme.
 * Return: 0 for success.
 */

int main(void)
{

int i;
int password_length = 20;
char password[password_length + 1];
srand(time(NULL));
char charset[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
srand(time(NULL));
int index;
time_t t;
time(&t);

	for (i = 0; i < password_length; i++)
	{
		if (i < 10)
		{
			password[i] = '0' + (t % 10);
		}
		else
		{
			index = rand() % (sizeof(charset) - 1);
			password[i] = charset[index];
		}
	}
	password[password_length] = '\0';

	printf("%s\n", password);

	return (0);

}
