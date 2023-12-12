#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * _binary_search - searches for value in array using binary search
 * @array: pointer to first element of array to be searched
 * @left: first index of array to be searched
 * @right: ending index of sub array
 * @value: value to be searched
 * Return: value position otherwise -1 if array is NULL or value missing
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{

	size_t index;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);
		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for value in sorted array of int using
 * exponential search
 * @array: pointer to first element of array to be searched
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: position of value otherwise NULL if value missing or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{

	size_t index = 0, right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value; index = index * 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	right = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, right);
	return (_binary_search(array, index / 2, right, value));
}
