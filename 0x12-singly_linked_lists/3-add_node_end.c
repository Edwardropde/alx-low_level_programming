#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the head of list_t
 * @str: The string to be added to list_t
 * Return: Address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	char *duplicate;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
<<<<<<< HEAD
	for (len = 0; str[len]; len++)
		;
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;
=======

	for (len = 0; str[len]; len++)
		;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (*head == NULL)
	{
		*head = new_node;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (*head);
}
