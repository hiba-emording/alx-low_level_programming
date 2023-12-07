#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data of a d-linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data in the list (success), or 0 (empty list)
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
