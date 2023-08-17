#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
<<<<<<< HEAD

	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
=======
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD

=======
	/*Declaring variables*/
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
<<<<<<< HEAD
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
=======
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		else
		{
			printf("Error\n");
			return (1);
		}
<<<<<<< HEAD
		count++;
	}
	printf("%d\n", sum);
=======

		count++;
	}

	printf("%d\n", sum); /*print sum*/

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (0);
}
