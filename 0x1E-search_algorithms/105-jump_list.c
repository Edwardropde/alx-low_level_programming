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

	size_t skip, size;
	listint_t *nd, *j;

	if (list == NULL || size == 0)
		return (NULL);
	skip = 0;
	size = sqrt(size);
	for (nd = j = list; j->index + 1 < size && j->n < value;)
	{
		nd = j;
		for (skip += size; j->index < skip; j = j->next)
		{
			if (j->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, j->index);
	for (; nd->index < j->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	return (nd->n == value ? nd : NULL);
}
