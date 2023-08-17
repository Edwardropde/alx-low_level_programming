#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: The character to print
=======
 * * @c: The character to print
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
