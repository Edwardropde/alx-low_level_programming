#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned long int j;
	hash_node_t *existing, *hold;

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		existing = ht->array[j];
		while (existing != NULL)
		{
			hold = existing;
			existing = existing->next;
			free(hold->key);
			free(hold->value);
			free(hold);
		}
	}
	free(ht->array);
	free(ht);
}
