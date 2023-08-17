#include <unistd.h>
/**
 * _putchar - shows c to stdout
 * @c: What should be printed
 * Return: 1 if successful
 * In case of error -1 is shown and set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
