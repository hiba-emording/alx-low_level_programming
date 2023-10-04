#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char.
 * @size: the size of the array.
 * @c: the character to initialize the array with.
 *
 * Return: pointer to the created array, or NULL if it fails / array = 0.
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
