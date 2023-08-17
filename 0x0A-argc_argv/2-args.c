<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
=======
#include <stdio.h>
#include "main.h"
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
