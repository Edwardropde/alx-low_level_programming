#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: List head
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int c;

	c = 0;
	if (h == NULL)
		return (c);
	while (h->previous != NULL)
		h = h->previous;
	while (h != NULL)
	{
		printf("%d/n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
