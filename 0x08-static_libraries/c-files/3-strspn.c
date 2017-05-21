#include "holberton.h"

/**
 * _strspn - returns length of a prefix substring
 * @s: pointer to a string
 * @accept: string of chars to match in string s
 * Return: unsigned int = number of bytes that match an element in
 *         the accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int flag = 1;

	while (s[i] >= '\0' && flag != 0)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				flag = 1;
		}
		if (flag == 1)
			i++;
	}
	return (i);
}
