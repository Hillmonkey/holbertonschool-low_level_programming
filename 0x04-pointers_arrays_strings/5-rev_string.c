#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string in place
 *  using pointer arithmetic because I can!
 * @s : pointer to the beginning of a string
 * Return: void
 **/
void rev_string(char *s)
{
	int len;
	int half;
	int i;
	char c;

	for (len = 0; s[len]; len++)
		;
	len--;
	half = len / 2;
	for (i = 0; i < half; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + (len - i));
		*(s + (len - i)) = c;
	}
	*(s + len + 1) = '\0';
}
