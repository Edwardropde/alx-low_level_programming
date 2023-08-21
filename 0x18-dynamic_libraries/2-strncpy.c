#include "main.h"
/**
 * _strncpy - Copies at most an inputted # of bytes from src to dest
 * @dest: The buffer in which the string copy is stored
 * @src: The source string
 * @n: The max no. of bytes to be copied
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
