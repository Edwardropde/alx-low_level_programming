#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data in a doubly linked list
 * @head: list head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{

	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->previous != NULL)
			head = head->previous;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
