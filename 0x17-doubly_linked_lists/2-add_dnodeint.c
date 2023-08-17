#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: list head
 * @n: element value
 * Return: Address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *h;
	dlistint_t *address;

	address = malloc(sizeof(dlistint_t));
	if (address == NULL)
		return (NULL);
	address->n = n;
	address->previous = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->previous != NULL)
			h = h->previous;
	}
	address->next = h;
	if (h != NULL)
		h->previous = address;
	*head = address;
	return (address);
}
