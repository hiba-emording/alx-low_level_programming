#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be added (starting at 0).
 * @n: Value to be assigned to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *current, *prev = NULL;
unsigned int i = 0;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			new->next = current->next;
			if (prev != NULL)
			{
				prev->next = new;
			}
			else
			{
				*head = new;
			}
			return (new);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (NULL);
}
