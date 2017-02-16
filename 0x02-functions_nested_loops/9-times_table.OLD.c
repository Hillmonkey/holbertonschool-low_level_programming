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
			printf("ROW = %i\n",row);
			for (col = 0; col <= 9; ++col)
			{
				p = col * row;
				putchar ('0'); // what the fuck 
				if (col = 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar('Z');
				}
				else if (col < 9)
				{
					if ( p / 10  == 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
						_putchar(',');
						_putchar('A');
					}
					else
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
						_putchar(',');
						_putchar('B');
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
						_putchar('C');
					}
					else
					{
						_putchar(' ');
						_putchar('0' + p / 10);
						_putchar('0' + p % 10);
						_putchar('\n');
						_putchar('D');
					}
				}
			}
		}
}


