#include <unistd.h>
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * Description: A program uses write to print a message and return 1.
 *
 * Return: the integer value 1 indicates the program finished with an error.
 */

int main(void)
{
	/* Using write function to print */
const char *quote =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write((1), quote, strlen(quote));
	/* Return: Always 1 (error) */
return (1);
}

