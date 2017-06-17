#include "variadic_functions.h"

/**
 * print_numbers - print list of numbers, then /n
 * @separator: string to print between numbers
 * @n: number of ints to passed to function
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if ((i < n - 1) && (separator))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(valist);
}
