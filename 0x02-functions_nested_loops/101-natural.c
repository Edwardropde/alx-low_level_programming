#include <stdio.h>
/**
 * main - Shows the total of various multiples
 *
 * Return: Always success
 */

int main(void)
{

	int f, g = 0;

	while (f < 1024)
	{
		if ((f % 3 == 0) || (f % 5 == 0))
		{
			g += f;
		}
		f++;
	}
	printf("%d\n", g);
	return (0);
}
