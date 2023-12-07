#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
