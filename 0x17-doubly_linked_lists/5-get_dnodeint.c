#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a distint_t list
 * @head: pointer to list head
 * @index: index of node to look for beginning from 0
 * Return: nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int s;
	dlistint_t *n;

	s = 0;
	if (head == NULL)
		return (NULL);
	n = head;
	while (n)
	{
		if (index == s)
			return (n);
		s++;
		n = n->next;
	}
	return (NULL);
}
