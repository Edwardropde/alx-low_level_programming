#include "main.h"
/**
 * _strcmp - compares pointers to 2 strings
 * @s1: The pointer to the first string
 * @s2: The pointer to the secnd string
 * Return: If str1 < str2, the -ve difference of the 1st unmatched characters
 * If str1 == str2, 0
 * If str1 > str2, the +ve difference for the 1st unmatched characters
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
