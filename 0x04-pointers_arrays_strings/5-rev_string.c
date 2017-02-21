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
	char *far;

	printf("%s\n",s);
	printf("Address of s = %p\n",&s );

	tmpP = s;

	// determine len(s)
	while (*s != 0)
	{
		len++;
		s++;
	}
	printf("Address of s = %p\n",&s );

	half = len/2;
	printf("Len now equals: %i\n", len);
	printf("half = %i\n", half);
	for (i = 0; i < half; i++)
	{
		puts("=============== ");
		printf("%i  %#04x  %c\n",i ,s[i], s[i]);
		tmpC = *(s + i); //tmpC = s[i];
		s(i) = s(len - i); //s[i] = s[len-i];
		printf("%i  %#04x  %c\n",i ,s[i], s[i]);
		s(i) = s(len - i); //s[len-i] = tmpC;
	}
	printf("Address of s = %p\n", &s );
	s = tmpP;

/**
 * rewrite ideas: skip the idea of coming up from the front,
 * going to the back ... but wait, I can't think of any
 * other way to change the string in place. So .. 2nd option
 * might be to break things down further ... print it out
 * character by character, front to back and bath
}
