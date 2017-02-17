#include "holberton.h"

/**
 * print_diagonal - print diagonal line using '\' characters
 * @n: int value how long (vertically) to make diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
