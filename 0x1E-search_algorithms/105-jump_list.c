#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_list - searches for value in sorted linked list using jump
 * @list: pointer to head of linked list
 * @size: number of nodes in linked list
 * @value: value to search for in linked list
 * Return: pointer to first node with value, or Null if head of list
 * is empty or value of node is missing
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{

	size_t index = 0, jump = sqrt(size), k = 0, last_index = 0;
	listint_t *xright = list;

	if (!list)
		return (NULL);
	while (list->n < value)
	{
		for (last_index = index, xright = list, k = 0;
			list->next && k < jump; k++)
		{
			list = list->next;
			index++;
		}
		printf("Value checked at index [%lu] = [%d]\n", index, list->n);
		if (!list->next)
			break;
	}
	if (!list->next)
		jump = last_index;
	else
		jump = index >= jump ? index - jump : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, index);
	index = index >= size ? size - 1 : index;
	list = xright;
	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", jump, list->n);
		if (list->n == value)
			return (list);
		jump++;
		list = list->next;
	}
	return (NULL);
}
