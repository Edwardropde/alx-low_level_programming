#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to search.
 * @key: The key to search for.
 * Return: The value associated with the key, or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int i;
	hash_node_t *existing;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	existing = ht->array[i];
	while (existing != NULL)
	{
		if (strcmp(existing->key, key) == 0)
			return (existing->value);
		existing = existing->next;
	}
	return (NULL);
}
