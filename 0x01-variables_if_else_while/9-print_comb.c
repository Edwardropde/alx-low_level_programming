#include <stdio.h>
/**
 * main - Point of entry
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a + '0');
	}
	if (a != 57)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

