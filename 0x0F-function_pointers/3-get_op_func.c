#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - this is to select the correct function to perform the
 * requested operation
 * @s: this is the operator that is passed as an argument
 *
 * Return: a pointer to the function corresponding to the operator that is
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	int x = 0;

	while (ops[x]. op != NULL && *(ops[x].op) != *s)
		x++;
	return (ops[x].f);
}
