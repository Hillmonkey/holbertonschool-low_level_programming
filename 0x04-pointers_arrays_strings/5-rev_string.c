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
	/* int half; */
	int i = 0;
	char tmp;

	for (len = 0; s[len]; len++)
		;
	len--;

	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
