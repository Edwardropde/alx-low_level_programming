#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary # to unsigned int
 * @b: String with binary number
 * Return: The converted #
 */

unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = dec_val * 2 + (b[i] - '0');
		i++;
	}

	return (dec_val);
}
