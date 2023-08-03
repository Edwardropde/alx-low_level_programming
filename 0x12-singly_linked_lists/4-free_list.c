#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees the list_t
 * @head: A pointer to list_t
 */

void free_list(list_t *head)
{

	list_t *thenode;

	for (; head != NULL;)
	{
		thenode = head;
		head = head->next;
		free(thenode->str);
		free(thenode);
	}
}
