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
 * _strdup - duplicate a string and place it in newly allocated space in
 *          memory
 * @str: string to be copied
 * Return: pointer to duplicated string, or NULL if sufficient memory
 *         is not available
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	new = malloc(size * sizeof(*str));

	if (new == NULL ||  *str == '\0')
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		new[i] = str[i];

	new[size] = '\0';
	return (new);
}
