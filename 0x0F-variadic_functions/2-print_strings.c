#include "variadic_functions.h"

/**
 * print_strings - print list of numbers, then /n
 * @separator: string to print between numbers
 * @n: number of ints to passed to function
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(valist, char*);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
			if ((i < n - 1) && (separator))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(valist);
}
