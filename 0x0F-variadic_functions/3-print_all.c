#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * op_c - prints a char ...
 * @ap: variable length list of parameters with mysterious internal index
 **/
void op_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * op_i - prints string representation of an int
 * @ap: variable length list of parameters with mysterious internal index
 **/
void op_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * op_f - prints a string representation of a float
 * @ap: variable length list of parameters with mysterious internal index
 **/
void op_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * op_s - prints a string
 * @ap: variable length list of parameters with mysterious internal index
 **/
void op_s(va_list ap)
{
	printf("%s", va_arg(ap, char*));
}


/**
 * print_all - prints anything of any var type
 * @format: list of single char type codes to pass arg types to function
 **/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	pa p_all[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		{NULL, NULL}
	};

	va_start(ap, format); /* format == "ceis" */
	while (format[i] != '\0')
	{
		j = 0;
		while (p_all[j].fmt != NULL)
		{
			if(format[i] == p_all[j].fmt[0]) /* test for multi-char?? */
			/* if ((strcmp(p_all[j].fmt, &format[i])) == 0) */
				p_all[j].f(ap);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
