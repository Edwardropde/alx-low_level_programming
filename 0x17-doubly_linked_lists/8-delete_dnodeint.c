#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at
 * index of dlistint_t linked list
 * @head: list head
 * @index: new node index
 * Return: 1 if successful or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *g;
	dlistint_t *g2;
	unsigned int j;

	g = *head;
	if (g != NULL)
		while (g->previous != NULL)
			g = g->previous;
	j = 0;
	while (g != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = g->next;
				if (*head != NULL)
					(*head)->previous = NULL;
			}
			else
			{
				g2->next = g->next;
				if (g->next != NULL)
					g->next->previous = g2;
			}
			free(g);
			return (1);
		}
		g2 = g;
		g = g->next;
		j++;
	}
	return (-1);
}
