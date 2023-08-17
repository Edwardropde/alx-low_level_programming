#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: The string to be printed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	s++;
<<<<<<< HEAD
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
=======
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
