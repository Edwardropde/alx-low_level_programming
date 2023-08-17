#include "lists.h"
/**
 * list_len - Determines number of elements in linked list_t list
 * @h: The linked list_t list
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{

	size_t e;

	for (e = 0; h != NULL; e++)
	{
		h = h->next;
	}
<<<<<<< HEAD
	return (e);
=======

	return (e);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
