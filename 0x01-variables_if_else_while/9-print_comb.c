#include <stdio.h>
/**
 * main - Point of entry
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
		if (a > 9)
		{
			putchar('\n');
		}
	return (0);
}
