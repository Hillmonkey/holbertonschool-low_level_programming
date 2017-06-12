#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - puts copy of src string into dest
 * @dest: string destination
 * @src: string source
 * Return: pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
