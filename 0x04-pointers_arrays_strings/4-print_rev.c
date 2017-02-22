#include "holberton.h"

/**
 * print_rev - Prints a string in reverse, followed by newline
 * @s : pointer to the beginning of a string
 * Return: void
 **/
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	len--;
	s--;
	while (len >= 0)
	{
		len--;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
