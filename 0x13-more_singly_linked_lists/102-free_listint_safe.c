#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

size_t free_listint_safe(listint_t **h);
size_t looped_listint_count(listint_t *head);

/**
 * looped_listint_count - counts number of unique nodes in looped listint_t
 * @head: A pointer to the head
 * Return: If the list is not looped 0, otherwise the number of unique nodes
 */

size_t looped_listint_count(listint_t *head)
{

	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	for (; hare != NULL; )
	{
		if (tortoise == hare)
		{
			tortoise = head;
			for (; tortoise != hare; )
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			for (; tortoise != hare; )
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: A pointer to the head or address
 * Return: Size of list freed
 * Description: Function sets head to null
 */

size_t free_listint_safe(listint_t **h)
{

	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (index = 0; h != NULL && *h != NULL; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
