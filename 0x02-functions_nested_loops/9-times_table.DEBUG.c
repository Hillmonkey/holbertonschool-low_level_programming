#include "holberton.h"
#include <stdio.h>

/**
 * times_table - outputs times tables 9x9
 *
 * returns - void
 */

void times_table(void)
{
		int row;
		int col;
		int p;

		

		for (row = 0; row <= 9; ++row)
		{
			_putchar('0');
			_putchar(',');
			for (col = 1; col <= 9; ++col)
			{
				p = col * row;
				if (col < 9)
				{
					if ( p / 10  == 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
						_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
						_putchar(',');
					}
				}
				else 
				{
					if (p / 10 == 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
						_putchar('\n');
					}
					else
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
						_putchar('\n');
					}
				}
			}
		}
}


