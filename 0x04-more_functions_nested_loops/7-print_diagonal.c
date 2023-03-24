#include "main.h"
/**
 * print_diagonal - Draws a diagnonal line
 * @n: The number of times \ should appear
 * Return: Empty
 */

void print_diagonal(int n)
{

	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
