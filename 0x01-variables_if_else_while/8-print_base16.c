#include <stdio.h>
/**
 * main - Print all # of base 16
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
