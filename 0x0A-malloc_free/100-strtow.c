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
	int j = 0, k;
	char **buf, **words;
	/*
	buf = malloc(sizeof(char *) * 1024);
	printf("buf = %p\n", (void *)buf);
	for (i = 0; i < 10; i++)
	{
		printf("pointer[%d]=>%p\n", i, (void *)buf[i]);
	}
	i = 0;
	if (buf == NULL)
		return (NULL);
	*/

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			numwords += 1;
			printf("numstring--%p", str + i);
			while (str[i] != ' ')
			{
				i++;
			}
		}
	}

	words = malloc(sizeof(char *) * (numwords + 1));
	if (words == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		len = 0;
		if (str[j] == ' ')
			j++;
		else
		{
			len += 1;
			while (str[j] != ' ')
			{
				j++;
			}
			words[0] = malloc(sizeof(char) *




	for (i = 0; i < numwords; i++)
	{
		for (k = 0; str[k] ==  k++)
			;
		words[i] = malloc(sizeof(char) * (k + 1));
		for (j = 0; buf[i][j]; j++)
			words[i][j] = buf[i][j];
		words[i][j] = '\0';
	}
	return (words);
}
