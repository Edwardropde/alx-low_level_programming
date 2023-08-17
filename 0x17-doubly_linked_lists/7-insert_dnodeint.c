#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at specific position
 * @h: list head
 * @idx: new node index
 * @n: new node value
 * Return: Address of new node or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *hd;
	dlistint_t *address;
	unsigned int j;

	address = NULL;
	if (idx == 0)
		address = add_dnodeint(h, n);
	else
	{
		hd = *h;
		j = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (j == idx)
			{
				if (hd->next == NULL)
					address = add_dnodeint_end(h, n);
				else
				{
					address = malloc(sizeof(dlistint_t));
					if (address != NULL)
					{
						address->n = n;
						address->next = hd->next;
						address->prev = hd;
						hd->next->prev = address;
						hd->next = address;
					}
				}
				break;
			}
			hd = hd->next;
			j++;
		}
	}
	return (address);
}
