#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers, followed by new line
 * @separator: string delimiter to be printed between numbers
 * @n: number of integers to be passed to this function
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
