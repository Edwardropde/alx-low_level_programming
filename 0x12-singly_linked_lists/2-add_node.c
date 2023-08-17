<<<<<<< HEAD
#include <string.h>
#include "lists.h"
=======
#include "lists.h"
#include <string.h>
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
/**
 * add_node - Adds a new node at the start
 * @str: The string to be added to list_t
 * @head: A pointer to the head of list_t
 * Return: NULL if function fails, otherwise the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = NULL;
	char *str_copy = NULL;
	size_t str_len = 0;

	if (str == NULL)
		return (NULL);
<<<<<<< HEAD
	str_len = strlen(str);
	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
=======

	str_len = strlen(str);
	str_copy = strdup(str);

	if (str_copy == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}
<<<<<<< HEAD
	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
=======

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (new_node);
}
