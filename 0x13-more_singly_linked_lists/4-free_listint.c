#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{

	listint_t *thenode;

	for (; head != NULL; head = thenode)
	{
		thenode = head->next;
		free(head);
	}
}
