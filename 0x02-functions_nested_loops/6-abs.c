#include "main.h"
/**
 * _abs - Finds the absolute value of integer
 * @c: This should be computed
 * Return: Absolute value of # or 0
 */

int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (0);
}
