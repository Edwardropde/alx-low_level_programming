#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * Return: Nothing.
 */

void print_name_as_is(char *name)
{

	printf("Hello, my name is %s\n", name);
}

/**
<<<<<<< HEAD
 * print_name_uppercase - print a name in uppercase
=======
 * print_name_uppercase - print a name in uppercas
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 * @name: name of the person
 * Return: Nothing.
 */

void print_name_uppercase(char *name)
{

	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
<<<<<<< HEAD
=======
		i++;
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{

	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
