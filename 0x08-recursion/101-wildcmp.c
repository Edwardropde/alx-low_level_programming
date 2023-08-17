#include "main.h"
/**
 * wildcmp - compares two strings
<<<<<<< HEAD
 * @s1: first string
=======
 * @s2: first string
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 * @s2: second string. can have * as a special character
 * Return: 1 if they are the same 0 if not
 */

int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
<<<<<<< HEAD
	return (0);
=======
			return (0);
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
