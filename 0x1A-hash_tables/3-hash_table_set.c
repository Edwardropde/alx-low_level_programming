#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int i;
	hash_node_t *new, *existing;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	existing = ht->array[i];
	while (existing != NULL)
	{
		if (strcmp(existing->key, key) == 0)
		{
			free(existing->value);
			existing->value = strdup(value);
			if (existing->value == NULL)
				return (0);
			return (1);
		}
		existing = existing->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
