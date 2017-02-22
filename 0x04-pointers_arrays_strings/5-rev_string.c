#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string, pointer never changes
 * @s : pointer to the beginning of a string
 * Return: void
 **/
void rev_string(char *s)
{
	int len = 0;
	int half;
	char *tmpP;
	int i;
	char tmpC;

	tmpP = s;
	while (*s != 0)
	{
		len++;
		s++;
	}
	s = tmpP;
	len--;
	half = len / 2;
	for (i = 0; i < half; i++)
	{
		tmpC = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - i)) = tmpC;
	}
	*(s + (len + 1)) = '\0';
	s = tmpP;
}
