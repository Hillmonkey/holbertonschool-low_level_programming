#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to target memory area
 * @b: constant byte to be terraformed into memory area
 * @n: the number of bytes to be filled in target memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp;
	unsigned int i;

	/* tmp = s (save original location) */
	tmp = s;
	/* for i = s to s + (n-1) */
	for (i = 0; i < n; i++)
		/* *(s + i) = b */
		*(s + i) = b;
	/* return original pointer location of s */
	return (tmp);
}
