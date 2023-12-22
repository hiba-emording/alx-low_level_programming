#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *current, *temp;
unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			current = ht->array[idx];

			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}

	free(head->array);
	free(head);
}
