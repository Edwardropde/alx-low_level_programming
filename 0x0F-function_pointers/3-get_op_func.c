#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - ...
 * @s: ...
 * Return: ...
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
<<<<<<< HEAD
=======

>>>>>>> 8a116eaf6c7ffa1bc4d5a55841296e2d605de468
	return (0);
}
