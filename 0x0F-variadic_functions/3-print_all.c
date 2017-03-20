#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - prints a char ...
 * @myChar - a single char to be printed
 * Return: A string (of len 1 in this case)
 **/
void op_c (char myChar)
{
	printf("%c", myChar);
}

/**
 * op_i - prints string representation of an int
 * @myInt - int passed in as type int
 * Return: A string representation of an int
 **/
void op_i (int myInt)
{
	printf("%d", myInt);
}

/**
 * op_f - prints a string representation of a float
 * @myFloat
 **/
void op_f (float myFloat)
{
	printf("%f", myFloat);
}

/**
 * op_s - prints a string
 * @myString - string passed in
 * Return: A string, no bonus line feed, I think.
 **/
void op_s (char *myString)
{
	printf("%s", myString);
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
	
	va_start(ap, format);
	while (format[i] != NULL)
	{
		while (p_all[j].fmt != NULL)
		{
			if ((strcmp(p_all[j], format[i])) == 0)
				/* there is a match, cast from pointer to some other thing to pointer */
				/* to pointer to void ... */
				/* call the function */
				/* when you get to the function, cast back to type you want */
		}

	}
	printf("\n");
	va_end(ap);
}

/**
	todo: make a bunch of functions, like the ones in 3-op_functions

**/
