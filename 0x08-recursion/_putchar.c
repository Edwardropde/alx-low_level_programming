#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 *  @c: The character shown
 *  Return: On error, -1 is returned, and errno is set appropriately
=======
 * @c: The character shown
 * On error, -1 is returned, and errno is set appropriately
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
 */

int _putchar(char c)
{

<<<<<<< HEAD
		return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
}
