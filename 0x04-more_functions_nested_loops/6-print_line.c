#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: Number of lines to be drawn
 * Return: Empty
 */

void print_line(int n)
{

	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
