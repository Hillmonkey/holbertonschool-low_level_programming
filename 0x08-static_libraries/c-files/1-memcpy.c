#include "holberton.h"

/**
 * _memcpy - copies memory from one area to another
 * @dest: pointer to target memory area
 * @src: pointer to source memory area
 * @n: the number of bytes from src to be copied
 * Return: pointer to dest  memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp;
	unsigned int i;

	tmp = dest;
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (tmp);
}
