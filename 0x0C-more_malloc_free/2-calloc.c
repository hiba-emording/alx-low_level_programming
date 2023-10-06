#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: Number of elements in the array.
 * @size: Size (in bytes) of each element.
 *
 * Return: A pointer to the allocated and initialized memory.
 * If nmemb or size is 0, or if malloc fails, it returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)p + i) = 0;
	}

	return (p);
}
