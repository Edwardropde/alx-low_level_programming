#include <stdio.h>
/**
 * main - Point of entry
 *
 * Return: 0 if successful
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int a;

		for (a = 0; a < 52; a++)
		{
			putchar(alp[a]);
		}
		putchar('\n');
		return (0);
}
