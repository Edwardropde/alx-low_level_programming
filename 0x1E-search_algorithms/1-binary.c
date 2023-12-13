#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches value in sorted array of int using binary search
 * algorithm
 * @array: pointer to array first element to search in
 * @size: number of elements in array
 * @value: value to search in array
 * Return: index where the value is
 */

int binary_search(int *array, size_t size, int value)
{

	size_t up, down, index;

	if (array == NULL)
		return (-1);
	for (down = 0, up = size - 1; up >= down;)
	{
		printf("Searching in array: ");
		for (index = down; index < up; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);
		index = down + (up - down) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			up = index - 1;
		else
			down = index + 1;
	}
	return (-1);
}
