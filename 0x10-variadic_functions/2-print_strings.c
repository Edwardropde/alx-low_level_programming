#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
<<<<<<< HEAD

=======
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
