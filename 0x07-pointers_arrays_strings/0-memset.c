#include "main.h"
/**
 * _memset - Point of entry
 * @s: Pointed destination
 * @b: Constant byte
 * @n: Bytes
 * Return: Always 0 if successful
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
