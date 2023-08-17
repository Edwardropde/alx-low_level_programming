#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
				i++;
			}
		}
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (-1);
}
