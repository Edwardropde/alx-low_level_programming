#include <stdio.h>

/**
 * main - program that prints and adds new line to the standard error
 *
 * Return: 1 if successful
 */
int main(void)
{
	const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(str) - 1;
	ssize_t written = write(2, str, len);
	return (written == len) ? 1 : -1;
}
