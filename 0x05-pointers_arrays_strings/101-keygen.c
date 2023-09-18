#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Description: a program that generates random valid passwords,
 * for the program 101-crackme.
 * Return: 0 for success.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *str;
size_t len;

extern unsigned long checksum_asm(*str, len);

int main(void)

{

srand(time(NULL));
char password[12];
int i;
unsigned long sum;

while (1)
{

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % 94 + 33;
	}

password[11] = '\0';
sum = checksum_asm(password, 11);

	if (sum == 0xad4)
	{
		printf("Password: %s\n", password);
		break;
	}

}

return (0);

}
