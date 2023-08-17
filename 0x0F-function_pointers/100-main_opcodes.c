#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the opcodes
 * @argc: The number of arguments put on the program
 * @argv: Array of pointers to argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
<<<<<<< HEAD
	bytes = atoi(argv[1]);
=======

	bytes = atoi(argv[1]);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
<<<<<<< HEAD
		if (index == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
=======

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (0);
}
