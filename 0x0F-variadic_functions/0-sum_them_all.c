#include "variadic_functions.h"

/**
 * sum_them_all - sum a variable size list of ints
 * @n: represents the number of ints to follow ...
 * Return: sum of ints passed int
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	int i;

	va_start(valist, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);
	return (sum);
}
