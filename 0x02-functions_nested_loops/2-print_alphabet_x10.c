#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	char g;
	int h = 0;

	while (h <= 9)
	{
		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
		h++;
	}
}
