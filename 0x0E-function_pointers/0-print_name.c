#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name ...
 * @name: name of a person
 * @f: function that does something
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
