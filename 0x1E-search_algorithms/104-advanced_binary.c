#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - recursively searches for value in sorted
 * array of int using binary search
 * @array: pointer to first element of array to be searched
 * @left: subarray starting index
 * @right: subarray ending index
 * @value: value to be searched
 * Return: -1 if value is missing or array is NULL, otherwise index where value
 * is
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{

	size_t index;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (index = left; index < right; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);
	index = left + (right - left) / 2;
	if (array[index] == value && (index == left || array[index - 1] != value))
		return (index);
	if (array[index] >= value)
		return (advanced_binary_recursive(array, left, index, value));
	return (advanced_binary_recursive(array, index + 1, right, value));
}

/**
 * advanced_binary - searches for value in sorted arrayof int using
 * advanced binary search
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to look for
 * Return: index of value or -1 if otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
