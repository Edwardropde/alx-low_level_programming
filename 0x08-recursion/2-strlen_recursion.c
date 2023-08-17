#include "main.h"
/**
 * _strlen_recursion - Calculate length of string
 * @s: The string to be calculated
 * Return: Int value
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
<<<<<<< HEAD
	return (_strlen_recursion(s) + 1);
=======
		return (_strlen_recursion(s) + 1);
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
