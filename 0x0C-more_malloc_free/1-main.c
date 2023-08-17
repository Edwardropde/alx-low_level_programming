#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{

	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
<<<<<<< HEAD
=======


>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
