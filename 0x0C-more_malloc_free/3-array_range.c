#include "main.h"
#include <stdlib.h>
/**
<<<<<<< HEAD
 * *array_range - ...
=======
 * array_range - ...
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 * @min: ...
 * @max: ...
 * Return: Integer value
 */

int *array_range(int min, int max)
{

	int *a, i = 0;

	if (min > max)
		return (NULL);
<<<<<<< HEAD
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
=======

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
<<<<<<< HEAD
	return (a);
=======
return (a);
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
