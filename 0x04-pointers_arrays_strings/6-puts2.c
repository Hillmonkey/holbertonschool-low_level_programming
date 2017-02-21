#include "holberton.h"

/**
 * puts2 - prints one out of two characters in a string
 * @s : pointer to the front of a string
 * Return: void
 **/
void puts2(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
		if (*s != 0)
			s++;
	}
	_putchar('\n');
}
