#include "main.h"
/**
 * print_most_numbers - Prints from 0 to 9
 *
 * Return: 0 to 9 while excluding 2 and 4
 */

void print_most_numbers(void)
{

	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
