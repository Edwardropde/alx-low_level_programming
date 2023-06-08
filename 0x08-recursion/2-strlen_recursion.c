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
	return (_strlen_recursion(s) + 1);
}
