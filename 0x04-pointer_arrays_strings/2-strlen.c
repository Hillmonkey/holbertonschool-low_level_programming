#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also functions as pointer to
 *    a string, which is an array of chars
 * Return: int representing the len of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}
