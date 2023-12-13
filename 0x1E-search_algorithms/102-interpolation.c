#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches value in sorted array using interpolation
 * search
 * @array: pointer to first element of array to be searched
 * @size: number of elements in array to be searched
 * @value: value to search for
 * Return: index where element is located or -1 if array is NULL or value is
 * missing
 */

int interpolation_search(int *array, size_t size, int value)
{

	size_t left, right, index;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		index = left + (((double)(right - left) /
			(array[right] - array[left])) * (value - array[left]));
		if (index < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}
