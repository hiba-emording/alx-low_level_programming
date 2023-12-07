#include "lists.h"

/**
 * free_dlistint - Frees all nodes in a d-linked list
 * @head: Pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
