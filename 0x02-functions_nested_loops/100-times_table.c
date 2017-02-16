#include "holberton.h"
#include <stdio.h>

/**
 * times_table - outputs times tables 9x9
 *
 * returns - void
 */

void print_times_table(int n)
{
		int row, col, p;

		for (row = 0; row <= n; ++row)
		{
			_putchar('0');
			_putchar(',');
			for (col = 1; col <= n; ++col)
			{
				p = col * row;
				if (p / 10  == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
				if (col < n)
					_putchar(',');
				else
					_putchar('\n');

			}
		}
}


