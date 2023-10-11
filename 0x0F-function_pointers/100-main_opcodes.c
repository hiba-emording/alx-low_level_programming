#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 for success, 1 for argument error, 2 for negativebyte count error.
 */

int main(int argc, char *argv[])
{
int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *opcodes = (unsigned char *)main;

	for (i = 0; i < nb; i++)
	{
		printf("%02x", opcodes[i]);

		if (i < nb - 1)
		{
		printf(" ");
		}
	}

	printf("\n");

	return (0);
}
