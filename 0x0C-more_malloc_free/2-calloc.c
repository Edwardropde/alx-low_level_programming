#include "main.h"
#include <stdlib.h>
/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
<<<<<<< HEAD
	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
=======

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (p);
}
