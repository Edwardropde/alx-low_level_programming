#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in the hash table array
 * @key: The key for which to compute the index.
 * @size: The size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
