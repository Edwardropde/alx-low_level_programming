#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{

	int flag, c, w;

	flag = 0;
	w = 0;
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
<<<<<<< HEAD
	return (w);
=======

		return (w);
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{

	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
<<<<<<< HEAD
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
=======

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
<<<<<<< HEAD
	matrix[k] = NULL;
=======

	matrix[k] = NULL;

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (matrix);
}
