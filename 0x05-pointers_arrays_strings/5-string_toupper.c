#include "holberton.h"

/**
 * string_toupper - changes all lower-case chars to uppercase in a string
 * @s: pointer to array of chars
 * Return: pointer to array of chars, with lowecase chars replaced by uppers
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
