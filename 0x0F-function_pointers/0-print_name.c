#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A function that takes a char pointer and prints it.
 */

void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	f(name);
}
