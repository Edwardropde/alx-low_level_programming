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

	int up = size - 1;
	int low = 0;
	int mid;
	int count;

	while (up >= low)
	{
		if (array == NULL)
			return (-1);
		printf("Searching in array: ");
		for (count = low; count <= up; count++)
		{
			if (count != low)
				printf(", %d", array[count]);
			else
				printf("%d", array[count]);
		}
		mid = low + (up - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			up = mid - 1;
	}
	return (-1);
}
