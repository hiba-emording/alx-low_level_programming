#include "lists.h"

/**
 * list_len - Returns number of elements in list_t.
 * @h: A pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
