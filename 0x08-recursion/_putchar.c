#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *  @c: The character shown
 *  Return: On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{

		return (write(1, &c, 1));
}
