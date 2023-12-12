#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - searches value in sorted array using jump search
 * @array: pointer to first element of array to be searched
 * @size: number of elements in array to be searched
 * @value: value to be searched
 * Return: Elemeent address or -1 if value not present or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{

	size_t jump, skip, index;

	if (array == NULL || size == 0)
		return (-1);
	skip = sqrt(size);
	for (index = 0, jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += skip;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; index < jump && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	return (array[index] == value ? (int)index : -1);
}
