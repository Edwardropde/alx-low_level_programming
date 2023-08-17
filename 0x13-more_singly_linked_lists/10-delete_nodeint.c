#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at specific index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
<<<<<<< HEAD

=======
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
<<<<<<< HEAD
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
=======

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (1);
}
