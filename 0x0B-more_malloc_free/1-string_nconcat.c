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
 * string_nconcat - concatenates two string
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: number of chars of 2nd string to add
 * Return: newly allocated memory with concatenated string
 *           NULL is returned on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, newlen;
	char *new;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;
	newlen = len1 + len2;
	new = malloc((newlen + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	for (i = 0; i < len2; i++)
		new[len1 + i] = s2[i];
	new[newlen] = '\0';
	return (new);
}
