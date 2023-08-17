#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{

	listint_t *next_node;
	int data;

	if (*head == NULL)
		return (0);
<<<<<<< HEAD
	next_node = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(next_node);
=======

	next_node = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(next_node);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (data);
}
