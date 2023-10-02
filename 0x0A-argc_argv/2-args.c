#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char **argv)
{
int i, j;
(void)argc;
for (i = 0; argv[i] != NULL; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
_putchar(argv[i][j]);
}
_putchar('\n');
}
return (0);
}
