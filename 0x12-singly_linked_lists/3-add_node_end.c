#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	}

	return (new);
}
