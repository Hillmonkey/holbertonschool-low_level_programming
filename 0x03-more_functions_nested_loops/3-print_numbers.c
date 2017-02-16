#include "holberton.h"

/**
 * print_numbers: print from 0-9, then new line
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
