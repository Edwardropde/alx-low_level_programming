#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
<<<<<<< HEAD
	while (s1[i])
		i++;
	while (s2[k])
		k++;
=======

	while (s1[i])
		i++;

	while (s2[k])
		k++;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	if (n >= k)
		l = i + k;
	else
		l = i + n;
<<<<<<< HEAD
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
=======

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
