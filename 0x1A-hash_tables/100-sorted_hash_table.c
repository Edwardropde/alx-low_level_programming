#include <stdlib.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created sorted hash table, or NULL if fail
 */

shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table_t *new;
	unsigned long int j;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		new->array[j] = NULL;
	new->shead = NULL;
	new->stail = NULL;
	return (new);
}

/**
 * shash_table_set - Adds or updates a key/value pair in a sorted hash table
 * @ht: The sorted hash table to modify.
 * @key: The key string.
 * @value: The value string.
 * Return: 1 on success, 0 on failure.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	shash_node_t *new, *existing, *previous = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	existing = ht->shead;
	while (existing && strcmp(key, existing->key) > 0)
	{
		previous = existing;
		existing = existing->snext;
	}
	if (existing && strcmp(key, existing->key) == 0)
	{
		free(existing->value);
		existing->value = strdup(value);
		if (existing->value == NULL)
			return (0);
		return (1);
	}
	new = malloc(sizeof(shash_node_t));
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
	if (previous)
	{
		new->snext = previous->snext;
		previous->snext = new;
	}
	else
	{
		new->snext = ht->shead;
		ht->shead = new;
	}
	if (new->snext == NULL)
		ht->stail = new;
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in sorted table
 * @ht: The sorted hash table to search in.
 * @key: The key to look for.
 * Return: The value associated with the key, or NULL if the key is unavailabo
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{

	unsigned long int i;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the hash table using the sorted linked list.
 * @ht: The sorted hash table to print.
 */

void shash_table_print(const shash_table_t *ht)
{

	shash_node_t *node;
	int Flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (!Flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		Flag = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order
 * @ht: The sorted hash table to print.
 */

void shash_table_print_rev(const shash_table_t *ht)
{

	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * print_rev_recursive - Recursively prints the hash table in reverse order
 * @node: The current node to print.
 */

void print_rev_recursive(shash_node_t *node)
{

	if (node == NULL)
		return;
	if (node->snext != NULL)
	{
		print_rev_recursive(node->snext);
		printf(", ");
	}
	printf("'%s': '%s'", node->key, node->value);
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */

void shash_table_delete(shash_table_t *ht)
{

	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node != NULL)
	{
		temp = node;
		node = node->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
