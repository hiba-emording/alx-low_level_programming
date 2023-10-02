#include "main.h"


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (success).
 */

int main(__attribute__((unused)) int argc, char *argv[])

{
int i;

if (argv[0])
{
for (i = 0; argv[0][i] != '\0'; i++)
{
_putchar(argv[0][i]);
}
_putchar('\n');
}
return (0);
}
