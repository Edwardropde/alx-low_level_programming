#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for algorithm in sorted singly linked list
 * of int using linear skip
 * @list: pointer to head of linked list to be searched
 * @value: value to look for
 * Return: NULL if value missing or head of list is NULL, otherwise
 * pointer to first node where value is.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{

	skiplist_t *nd, *j;

	if (list == NULL)
		return (NULL);
	for (nd = j = list; j->next != NULL && j->n < value;)
	{
		nd = j;
		if (j->express != NULL)
		{
			j = j->express;
			printf("Value checked at index [%ld] = [%d]\n",
					j->index, j->n);
		}
		else
		{
			while (j->next != NULL)
				j = j->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, j->index);
	for (; nd->index < j->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	return (nd->n == value ? nd : NULL);
}
