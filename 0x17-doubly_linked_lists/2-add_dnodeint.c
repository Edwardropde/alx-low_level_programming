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
	address->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	address->next = h;
	if (h != NULL)
		h->prev = address;
	*head = address;
	return (address);
}
