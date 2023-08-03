#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - Find loop in the listint_t linked list
 * @head: Points to the head or address of listint_t list
 * Return: NULL if no loop and otherwise if address of first node of list found
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *tortoise = head, *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
