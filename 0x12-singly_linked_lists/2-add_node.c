#include <string.h>
#include "lists.h"
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
	str_len = strlen(str);
	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
