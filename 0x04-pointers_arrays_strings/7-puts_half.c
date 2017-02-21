#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also functions as pointer to
 *    a string, which is an array of chars
 * Return: int representing the len of the string s
 */
void puts_half(char *str)
{
	int len = 0;
	int i, half;
	char *tmp;

	tmp = str;
	printf("%p\n", str);
	while (*str != 0)
	{
		len++;
		str++;
	}
	printf("%p\n", str);
	printf("%p\n", tmp);
	str = tmp;
	printf("%p\n", str);
	half = len / 2;
	for (i = 0; i < len; i++)
		if (i > len - half)
			_putchar(*str);
		str++;
	_putchar('\n');
}
