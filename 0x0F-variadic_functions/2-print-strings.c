#include "variadic_functions.h"
#include <stdio.h>
#include <stdar.h>

/**
 * print_strings - prints strings, followed by new line
 * @separator: string delimiter to be printed between strings
 * @n: number of strings to be passed to this function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(ap, char*)
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}	
