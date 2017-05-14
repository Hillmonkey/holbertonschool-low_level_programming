#include "holberton.h"

/**
 * _strncpy - Returns a copy of a string
 * @dest: destination where copied string is set
 * @src: source of string to be copied
 * @n: int; number of chars to be copied from src to dest
 * Return: pointer to destination string "dest"
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
