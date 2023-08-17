#include "lists.h"
/**
 * add_dnodeint_end - Adds new node at the end of a distint_t list
 * @head: list head
 * @n: value of element
 * Return: Address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *address;
	dlistint_t *h;

	address = malloc(sizeof(dlistint_t));
	if (address == NULL)
		return (NULL);
	address->n = n;
	address->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = address;
	}
	else
	{
		*head = address;
	}
	address->previous = h;
	return (address);
}
