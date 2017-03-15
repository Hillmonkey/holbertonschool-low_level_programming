#include "calc.h"
#include <stdio.h>
/**
 * get_op_func - select correct function and pass in vars
 * @s: operand of function
 * Return: int is result of operand operated on a & b
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0);
			return (ops[i].f);
			i++;
	}
	return (NULL);
}
