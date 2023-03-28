#include <stdio.h>
/**
 * swap_int - Swaps values of two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 * Return: Empty
 */

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
