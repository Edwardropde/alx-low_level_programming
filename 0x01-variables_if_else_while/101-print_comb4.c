#include <stdio.h>
/**
 * main - different combinations of three digits
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
	for (j = 49; j < 58; j++)
	{
	for (k = 49; k < 58; k++)
	{
		if (i != j && i != k && j != k)
		{
		if (k > j && j > i)
		{
			putchar(i);
			putchar(j);
			putchar(k);

		if (i != 55 || j != 56 || k != 57)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
