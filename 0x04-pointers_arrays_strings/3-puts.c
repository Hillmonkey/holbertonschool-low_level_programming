#include "holberton.h"

/**
 * _puts - prints a string, followed by a new ling to stdout
 * @s : pointer to the front of a string
 * Return: void
 **/
void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
