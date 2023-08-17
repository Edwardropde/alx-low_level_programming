#include "main.h"
/**
 * _memcpy - Point of entry
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always null
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
