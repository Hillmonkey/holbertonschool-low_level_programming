#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - prints a char ...
 * @myChar - a single char to be printed
 * Return: A string (of len 1 in this case)
 **/
void op_c (va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * op_i - prints string representation of an int
 * @myInt - int passed in as type int
 * Return: A string representation of an int
 **/
void op_i (va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * op_f - prints a string representation of a float
 * @myFloat
 **/
void op_f (va_list ap)
{
	printf("%f", var_arg(ap,double));
}

/**
 * op_s - prints a string
 * @myString - string passed in
 * Return: A string, no bonus line feed, I think.
 **/
void op_s (va_list ap)
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
	while (format[i] != NULL)
	{
		j = 0;
		while (p_all[j].fmt != NULL)
		{
			if ((strcmp(p_all[j], format[i])) == 0)
				/* call the function */
				p_all[j].f(va_arg(ap, 
				/* when you get to the function, cast back to type you want */
		}

	}
	printf("\n");
	va_end(ap);
}
