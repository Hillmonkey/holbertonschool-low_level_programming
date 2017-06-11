#include "holberton.h"
#include <stdlib.h>



/**
 * str_concat - concatenates two string
 * @s1: first string to be concatenated NULL is considered to be empty string`
 * @s2: second string to be concatenated
 * Return: newly allocated memory with concatenated string
 *           NULL is returned on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2, newlen;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	newlen = len1 + len2;
	new = malloc((newlen + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		new[len1 + i] = s2[i];
	new[newlen] = '\0';
	return (new);
}
