#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
		char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

		fwrite(&err, sizeof(char), 59, stderr);
		return (1);
}

