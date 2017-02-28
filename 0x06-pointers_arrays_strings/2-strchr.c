#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: an ascii character
 * Return: pointer to first occurence of char c in string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) && (s[i] != 0))
		i++;
	if (s[i] == 0)
		return (&s[i]);
	else
		return (&s[i]);
}
