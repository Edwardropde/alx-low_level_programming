#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array
 * Return: Pointer to newly created hash table
 * NULL if unsuccessful
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new = NULL;
	unsigned long int j;

	if (size <= 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	for (j = 0; j < size; j++)
	{
		new->array[j] = NULL;
	}
	return (new);
}
