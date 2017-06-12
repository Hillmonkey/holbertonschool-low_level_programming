#include "holberton.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0
/**
 * _strlen - return length of string
 * @str: string
 * Return: int representing length of string
 **/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * _strstr - locate a substring (needle) within a string (haystack)
 * @hay: the haystack string
 * @need: the needle string to find in the haystack
 * Return: pointer to occurence of substring within string or NULL needle not in
 *      ... haystack
 **/
char *_strstr(char *hay, char *need)
{
	int i = 0, j = 0;
	int len1, len2;
	int match = TRUE;

	len1 = _strlen(hay);
	len2 = _strlen(need);

	if (!hay || !need)
		return (NULL);
	if (len1 == 0 || len2 == 0 || len2 > len1)
		return (NULL);

	for (i = 0; i <= (len1 - len2); i++)
	{
		for (j = 0; j < len2 && match == TRUE; j++)
			if (need[j] != hay[i + j])
				match = FALSE;
		if (match)
			return (hay + i);

	}
	return (NULL);
}
