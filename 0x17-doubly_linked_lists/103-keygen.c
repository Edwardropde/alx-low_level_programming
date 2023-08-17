#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - create key based on username for crackme5
 * @ac: # of arguments passed
 * @av: arguments passed to main
 * Return: 0 on success, 1 on error
 */

int main(int ac, char *av[])
{

	unsigned int j, b;
	size_t length, sum;
	char *k = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (ac != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(av[1]);
	key[0] = l[(length ^ 59) & 63];
	for (j = 0, add = 0; j < length; j++)
		sum += av[1][j];
	key[1] = k[(sum ^ 79) & 63];
	for (j = 0, b = 1; j < length; j++)
		b *= av[1][j];
	key[2] = k[(b ^ 85) & 63];
	for (b = av[1][0], j = 0; j < length; j++)
		if ((char)b <= av[1][j])
			b = av[1][j];
	srand(b ^ 14);
	key[3] = k[rand() & 63];
	for (b = 0, j = 0; j < length; j++)
		b += av[1][j] * av[1][j];
	key[4] = k[(b ^ 239) & 63];
	for (b = 0, j = 0; (char)j < av[1][0]; j++)
		b = rand();
	key[5] = k[(b ^ 229) & 63];
	printf("%s\n", key);
	return (0);
}
