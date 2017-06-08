#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * wordcount - returns # of words in string (space delimiter)
 * @str: string to count words in
 * Return: Int = number of words in string
 **/
int wordcount(char *str)
{
	int i = 0;
	int numwords = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			numwords += 1;
			while (str[i] != ' ')
				i++;
		}
	}
	return (numwords);
}
/**
 * strtow - returns an array of strings (words)
 * @str: input string
 * Return: an array of strings
 **/

char **strtow(char *str)
{
	int i = 0, numwords;
	int j = 0, k, wordlen;
	char **words;
	char *tmp;

	numwords = wordcount(str);
	words = malloc(sizeof(char *) * (numwords + 1));
	if (words == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		wordlen = 0;
		if (str[j] == ' ')
			j++;
		else
		{
			tmp = str + j;
			wordlen += 1;
			while (str[j] != ' ')
			{
				wordlen++;
				j++;
			}
			words[i] = malloc(sizeof(char) * (wordlen + 1));
			if (words[i] == NULL)
				return (NULL);
			for (k = 0; k < wordlen; k++)
				words[i][k] = tmp[k];
			words[i][wordlen] = '\0';
			i++;
		}
	}
	words[numwords] = NULL;
	return (words);
}
