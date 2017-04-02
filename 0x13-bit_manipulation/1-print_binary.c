#include "holberton.h"

/**
 * print_binary - prints binary representation of an int
 * @n: big number passed in to be printed
 **/

void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int y;
	unsigned int UL_bits = 8 * sizeof(unsigned long int);
	int is_leading_zero = 1;

	for (i = 0; i < UL_bits; i++)
	{
		y = n << 1;
		y = y >> 1;

		if (n != y)
		{
			is_leading_zero = 0;
			_putchar('1');
		}
		else if (!is_leading_zero)
			_putchar('0');
		n = n << 1;
	}
	if (is_leading_zero)
		_putchar('0');
}
