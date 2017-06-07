#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - returns an array of strings (words)
 * @str - input string
 * Return: an array of strings
 **/

char **strtow(char *str)
{
	int i = 0, numwords = 0;
	int j, k;
	char **buf, **words;

	buf = malloc(sizeof(void *) * 1024);
	for (i = 0; i < 10; i++)
	{
		printf("pointer[%d]=>%p", i, buf[i]);
	}
	i = 0;
	if (buf == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str[i] = '\0';
			i++;
		}
		else
		{
			numwords += 1;
			buf[numwords - 1] = str + i;
			while (str[i] != ' ')
				i++;
		}
	}
	words = malloc(sizeof(char **) * (numwords + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < numwords; i++)
	{
		for (k = 0; buf[i][k]; k++)
			;
		words[i] = malloc(sizeof(char) * (k + 1));
		for (j = 0; buf[i][j]; j++)
			words[i][j] = buf[i][j];
		words[i][j] = '\0';
	}
	return (words);
}
