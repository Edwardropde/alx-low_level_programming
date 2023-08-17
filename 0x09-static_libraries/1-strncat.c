#include "main.h"
/**
<<<<<<< HEAD
 * _strncat - concatenate two strings using at most n bytes from src
=======
 * _strncat - concatenate two strings
 * using at most n bytes from src
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
