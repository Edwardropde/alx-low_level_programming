#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
