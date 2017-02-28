#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: an ascii character
 * Return: pointer to first occurence of char c in string s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] > 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
