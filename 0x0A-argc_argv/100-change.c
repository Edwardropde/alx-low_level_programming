<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to change
 * for amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful 1 if error.
=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 */

int main(int argc, char *argv[])
{

	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD
	num = atoi(argv[1]);
	result = 0;
=======

	num = atoi(argv[1]);
	result = 0;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	printf("%d\n", result);
	return (0);
}
