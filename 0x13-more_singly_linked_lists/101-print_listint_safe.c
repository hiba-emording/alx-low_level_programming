#include "lists.h"

/**
 * print_listint_safe - Prints a linked list and handles loops.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;
int loop_detected = 0;

slow = head;
fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		slow = head;

		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			fast = fast->next;
		}

		printf("-> [%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
