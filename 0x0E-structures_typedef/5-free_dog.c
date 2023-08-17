#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Free dogs
 * @d: Dog to be freed
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
		return;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	free(d->owner);
	free(d->name);
	free(d);
}
