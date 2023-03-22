#include "main.h"

#include <stdio.h>
/**
 * print_to_98 - Shows all natural # from n to 98
 * @n: The first number
 * Return: 0 if successful
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
		printf("%d,", n);
	}
	}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d,", n);
			}
		}
	}
}
