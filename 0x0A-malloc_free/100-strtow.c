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
	int j = 0, k, len;
	char **buf, **words;
	char *tmp;

	/* determine number of words in original string */
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			numwords += 1;
			/* printf("numstring--%p", str + i); */
			while (str[i] != ' ')
			{
				i++;
			}
		}
	}
	printf("numwords = %d\n", numwords);
	words = malloc(sizeof(char *) * (numwords + 1));
	if (words == NULL)
		return (NULL);
	

	while (str[j] != '\0')
	{
		printf("while[j] loop #%d\n", j);
		len = 0;
		if (str[j] == ' ')
			j++;
		else
		{ /* use tmp to drop a pointer */
			tmp = str + j;
			j++;
			len += 1;
			while (str[j] != ' ')
			{
				len++;
				j++;
			}
			words[i] = malloc(sizeof(char) * (len + 1));
			if (words[i] == NULL)
				return (NULL);
			for (k = 0; k < len; k++)
				words[i][k] = tmp[k];
			words[i][len] = '\0';
			i++;
		}
	}
	words[numwords] = NULL;
	return (words);

}

