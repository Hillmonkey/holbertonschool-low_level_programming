#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
		if ((strcmp((ops[i].op), s)) == 0)
			if (i != 5)
				return (ops[i].f);
			if (i == 5)
			{
				puts("Error");
				exit(99);
			}
		i++;
	}
	return (NULL);
}
