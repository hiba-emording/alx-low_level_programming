#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @p: Pointer to the previously allocated memory.
 * @old_size: The old size, in bytes, of the allocated space for p.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 * If new_size is equal to old_size, it returns p.
 * If new_size is zero, it frees p and returns NULL.
 * If malloc fails, it returns NULL.
 */
void *_realloc(void *p, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_p;

	if (p == NULL)
	{
		new_p = malloc(new_size);
		return (new_p);
	}
	if (new_size == 0)
	{
		free(p);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (p);
	}
	new_p = malloc(new_size);

	if (new_p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new_p + i) = *((char *)p + i);
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
		*((char *)new_p + i) = *((char *)p + i);
		}
	}

	free(p);
	return (new_p);
}
