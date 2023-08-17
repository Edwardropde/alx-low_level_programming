#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
<<<<<<< HEAD
	if (p == NULL)
		exit(98);
=======

	if (p == NULL)
		exit(98);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (p);
}
