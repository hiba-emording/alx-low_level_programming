#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add/update - must not be an empty string.
 * @value: The value associated with the key.
 *
 * Return: On failure - 0.
 *         On success - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
char *val_dup;
unsigned long int idx, hash_idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);

	hash_idx = key_index((const unsigned char *)key, ht->size);
	idx = hash_idx;

	for (; ht->array[idx]; idx++)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = val_dup;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
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
	return (1);
}
