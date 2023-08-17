#include <stdio.h>
/**
 * main - Print combinations
 *
 * Return: 0 if successful
 */

int main(void)
{
	int m, n;

	for (m = 0; m < 100; m++)
	{
		for (n = m + 1; n < 100; n++)
		{
			if (m != n)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
			}
			if (m != 98 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
