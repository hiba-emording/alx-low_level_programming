#include "lists.h"

/**
 * print_listint_safe - Prints a linked list and handles loops.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *current_node = NULL;
const listint_t *loop_detector = NULL;
size_t count = 0;
size_t loop_node_index;

current_node = head;

	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;
		current_node = current_node->next;
		loop_detector = head;
		loop_node_index = 0;

		while (loop_node_index < count)
		{
			if (current_node == loop_detector)
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				return (count);
			}

			loop_detector = loop_detector->next;
			loop_node_index++;
		}

		if (!head)
		{
			exit(98);
		}
	}

	return (count);
}
