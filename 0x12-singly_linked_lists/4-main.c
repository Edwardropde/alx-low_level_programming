#include <stdlib.h>
<<<<<<< HEAD
#include "lists.h"
#include <string.h>
#include <stdio.h>
=======
#include <string.h>
#include <stdio.h>
#include "lists.h"
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{

	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
