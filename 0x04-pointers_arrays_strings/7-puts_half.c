#include "holberton.h"

/**
 * puts_half - prints 2nd half of a string
 * @str: pointer to a char (also functions as pointer to
 *    a string, which is an array of chars)
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, half;
	char *tmp;

	tmp = str;
	while (*str != 0)
	{
		len++;
		str++;
	}
	str = tmp;
	half = len - len / 2;
	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
