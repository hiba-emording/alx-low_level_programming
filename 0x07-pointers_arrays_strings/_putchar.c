#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character.
 * @c: The character to be printed.
 *
 * Return: Always 1 (success).
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}

