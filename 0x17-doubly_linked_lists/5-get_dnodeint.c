#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a d-linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node
 *
 * Return: Address of the nth node (success), or NULL (no node)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
