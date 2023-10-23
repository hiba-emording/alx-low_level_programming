#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, handling loops.
 * @h: Pointer to the pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
int address_difference;

listint_t *temp_node;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		address_difference = (int)(*h - (*h)->next);

		if (address_difference > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			node_count++;
		}

		else
		{
			free(*h);
			*h = NULL;
			node_count++;
			break;
		}
	}

	*h = NULL;

	return (node_count);
}
