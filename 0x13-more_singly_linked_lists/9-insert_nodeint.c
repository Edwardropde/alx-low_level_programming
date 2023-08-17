#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list anywhere
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new, *thenode = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
<<<<<<< HEAD
	new->n = n;
=======

	new->n = n;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (idx == 0)
	{
		new->next = thenode;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && thenode != NULL; i++)
	{
		thenode = thenode->next;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (thenode == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = thenode->next;
	thenode->next = new;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (new);
}
