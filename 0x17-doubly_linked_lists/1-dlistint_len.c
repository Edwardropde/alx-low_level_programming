#include "lists.h"
/**
 * dlistint_len - returns # of elements in doubly linked list
 * @h: head
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{

	int length;

	length = 0;
	if (h == NULL)
		return (length);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
