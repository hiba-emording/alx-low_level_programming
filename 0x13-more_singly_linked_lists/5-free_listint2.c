#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
