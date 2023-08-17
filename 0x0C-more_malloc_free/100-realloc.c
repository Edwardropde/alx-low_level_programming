#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - ...
 * @ptr: ...
 * @old_size: ...
 * @new_size: ...
 * Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
<<<<<<< HEAD
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
=======

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
<<<<<<< HEAD
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
=======

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	free(ptr);
	return (nptr);
}
