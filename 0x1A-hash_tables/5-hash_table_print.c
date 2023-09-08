#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int j;
	hash_node_t *node;
	int Flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node != NULL)
		{
			if (!Flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			Flag = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
