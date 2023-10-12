#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format.
 * @format: The format string containing type specifiers.
 * @...: The variadic arguments to be printed.
 */

void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *separator = "";
char *string_arg;
va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
				case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
				case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
				case 's':

				string_arg = va_arg(args, char *);

				if (!string_arg)
				string_arg = "(nil)";
				printf("%s%s", separator, string_arg);
				break;

				default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
