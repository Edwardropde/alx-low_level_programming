#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers
 * @separator: The string to be seprated
 * @n: The number of int passed to the function
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
<<<<<<< HEAD
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
=======

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	va_end(nums);
}
