#include "lists.h"

/**
 * print_list - Prints all elements of list_t.
 * @h: A pointer to the head of list.
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{

size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;

		count++;
	}

	return (count);
}
