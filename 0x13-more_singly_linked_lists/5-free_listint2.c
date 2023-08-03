#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{

	listint_t *thenode;

	if (head == NULL)
		return;

	for (; *head != NULL; *head = thenode)
	{
		thenode = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
