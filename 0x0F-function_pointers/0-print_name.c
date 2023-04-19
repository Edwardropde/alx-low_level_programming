#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
		f(name);
}
