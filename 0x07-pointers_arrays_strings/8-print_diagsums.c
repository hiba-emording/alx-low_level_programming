#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array).
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
int i, primary_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_sum, secondary_sum);
}
