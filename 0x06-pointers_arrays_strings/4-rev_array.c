#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * This function reverses the content of the given array of integers in place.
 */

void reverse_array(int *a, int n)

{
int temp;
int start = 0;
int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
