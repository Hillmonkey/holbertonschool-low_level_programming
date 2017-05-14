#include "holberton.h"

/**
 * _atoi - converts string representing number to an int
 * @s: takes in a string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	*s = *s + 1;
	*s = *s - 1;
	return (0);
}
