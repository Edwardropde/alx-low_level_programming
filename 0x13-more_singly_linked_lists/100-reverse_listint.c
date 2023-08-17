#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next = NULL;

	if (*head == NULL)
		return (NULL);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
<<<<<<< HEAD
	(*head)->next = prev;
=======

	(*head)->next = prev;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (*head);
}
