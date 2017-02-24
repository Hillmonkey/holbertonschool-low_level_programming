#include "holberton.h"
/**
 * to_upper - if an ascii value is a lower, convert to upper
 * @c: char to be converted to upper, if appropriate
 * Return: char that has been capitalized, if appropriate
 */
char to_upper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/**
 * leet - convert string to leet talk
 * @s: string to be converted to leet talk
 * Return: pointer to string converted to leet
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	static char ch[5] = {'A', 'E', 'O', 'T', 'L'};
	static char loot[5] = {'4', '3', '0', '7', '1'};

	while (s[i] != 0)
	{
		for (j = 0; j < 5; j++)
			if (to_upper(s[i]) == ch[j])
				s[i] = loot[j];
		i++;
	}
	return (s);
}
