#include "holberton.h"
/**
 **_strlen_recursion - function that returns the length of a string.
 **@s: pointer to beginning of string
 **
 **Return: int = length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return (0);
	i = (_strlen_recursion(s + 1));
		return (i + 1);
}
