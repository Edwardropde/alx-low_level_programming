#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints string before the execution of main function
 *
 * Return: NULL
 */

void hare(void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
