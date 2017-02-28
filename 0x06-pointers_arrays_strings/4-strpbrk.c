#include "holberton.h"

/**
 * _strpbrk - returns length of a prefix substring
 * @s: pointer to a string
 * @accept: string of chars to match in string s
 * Return: unsigned int = number of bytes that match an element in
 *         the accept string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i] > 0)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
