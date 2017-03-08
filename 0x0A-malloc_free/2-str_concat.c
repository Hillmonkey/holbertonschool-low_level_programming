#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also functions as pointer to
 *     a string, which is an array of chars
 * Return: int representing the len of the string s
 */
int _strlen(char *s)
{
	int i = 0;
	char *tmp;

	tmp = s;
	while (*s != 0)
	{
		i++;
		s++;
	}
	s = tmp;
	return (i);
}

/**
 * str_concat - concatenates two string
 * @s1: first string to be concatenated NULL is considered to be empty string`
 * @s2: second string to be concatenated
 * Returns - newly allocated memory with concatenated string
 *           NULL is returned on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2, newlen;
	char *new;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0'	)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	newlen = len1 + len2;
	new = malloc((newlen + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];		
	for (i = 0; s2[i] != '\0'; i++)
		new[len1 + i] = s2[i];
	new[newlen] = '\0';
	return new;
}
