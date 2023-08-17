#include "lists.h"
/**
 * free_dlistint - frees the distint_t list
 * @head: pointer to list head
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->previous);
	}
	free(head);
}
