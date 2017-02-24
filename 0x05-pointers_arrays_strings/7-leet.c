#include "holberton.h"

/**
 * leet - convert string to leet talk
 * @s: string to be converted to leet talk
 * Return: pointer to string converted to leet
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char ch[10] = "aeotlAEOTL";
	char loot[10] = "4307143071";

	while (s[i] != 0)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == ch[j])
				s[i] = loot[j];
		i++;
	}
	return (s);
}
