#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a index
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index to add the new node
 * @n: Value for the new node
 *
 * Return: Address of the new node (success), or NULL (failed)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp;
unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n, new->next = NULL, new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;

		if (*h)
		{
			(*h)->prev = new, *h = new;
			return (new);
		}
		temp = *h;

		for (i = 0; temp != NULL && i < idx - 1; i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = temp->next, new->prev = temp;

		if (temp->next != NULL)
		{
			temp->next->prev = new, temp->next = new;
		}
	}
	return (new);
}
