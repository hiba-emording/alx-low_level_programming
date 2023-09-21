#include "main.h"

/**
 * print_buffer - Print the content of a buffer in a specific format.
 * @b: Pointer to the buffer to be printed.
 * @size: Size of the buffer in bytes.
 */

void print_buffer(char *b, int size)
{
int byte, i;/*Declare loop control variables.*/
	for (byte = 0; byte < size; byte += 10)
	{
/*Print position of the first byte of the current line in hexadecimal format.*/
		printf("%08x: ", byte);
/*Loop to print hexadecimal content (2 bytes at a time, separated by space).*/
		for (i = 0; i < 10; i++)
		{
/*Print two spaces if the buffer size is exceeded*/
			if ((i + byte) >= size)
				printf("  ");
			else
/*Print two-digit hexadecimal.*/
				printf("%02x", *(b + i + byte));
			if ((i % 2) != 0 && i != 0)
/*Add a space between pairs of hexadecimal bytes.*/
				printf(" ");
		}
/*Loop to print ASCII representation or a period for non-printable bytes.*/
		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
/*Exit the loop if the buffer size is exceeded.*/
				break;
			else if (*(b + i + byte) >= 31 && *(b + i + byte) <= 126)
/*Print printable character*/
				printf("%c", *(b + i + byte));
			else
/*Print a period for non-printable character*/
				printf(".");
		}
		if (byte >= size)
/*Skip the loop if the buffer size is exceeded.*/
			continue;
/*Print a newline to separate lines.*/
		printf("\n");
	}
	if (size <= 0)
/*Print a newline if the buffer size is 0 or negative.*/
		printf("\n");
}
