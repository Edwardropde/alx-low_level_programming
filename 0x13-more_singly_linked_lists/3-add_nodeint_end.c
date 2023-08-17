#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
<<<<<<< HEAD
	new->next = NULL;
	new->n = n;
=======

	new->next = NULL;
	new->n = n;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (; *head != NULL; head = &((*head)->next))
	{

	}
<<<<<<< HEAD
	*head = new;
=======

	*head = new;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (new);
}
