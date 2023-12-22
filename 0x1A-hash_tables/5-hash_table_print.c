#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to be printed.
 */

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current;
unsigned long int idx;
unsigned char comma_printed = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (comma_printed == 1)
			{
				printf(", ");
			}
			current = ht->array[idx];

			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;

				if (current != NULL)
				{
					printf(", ");
				}
			}
			comma_printed = 1;
		}
	}

	printf("}\n");
}
