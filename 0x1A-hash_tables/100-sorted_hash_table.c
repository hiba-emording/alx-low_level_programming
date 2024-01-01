#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the array.
 *
 * Return: On error - NULL.
 *         On success - Pointer to the new hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_table;
unsigned long int index;

	new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		return (NULL);
		free(new_table);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}


/**
 * shash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add/update - must not be an empty string.
 * @value: The value associated with the key.
 *
 * Return: On failure - 0.
 *         On success - 1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *node, *temp;
char *val_dup;
unsigned long int hash_idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);

	hash_idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_dup;
			return (1);
		}
		temp = temp->snext;
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(val_dup);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		free(val_dup);
		return (0);
	}
	node->value = val_dup;
	node->next = ht->array[hash_idx];
	ht->array[hash_idx] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}
	return (1);
}


/**
 * shash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to retrieve the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in ht.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *current_node;
unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	current_node = ht->array[idx];

	while (current_node && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;

	return ((current_node == NULL) ? NULL : current_node->value);
}


/**
 * shash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to be printed.
 */

void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");

	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;

		if (current != NULL)
		{
			printf(", ");
		}
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: A pointer to the hash table to be printed.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	current = ht->stail;
	printf("{");


	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;

		if (current != NULL)
		{
			printf(", ");
		}
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to be deleted.
 */

void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head = ht;
shash_node_t *current, *temp;

	if (ht == NULL)
	{
		return;
	}
	current = ht->shead;

	while (current != NULL)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}

	free(head->array);
	free(head);
}
