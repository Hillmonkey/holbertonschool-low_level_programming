#include "holberton.h"

/**
 * _strcpy - copyt string from src to dest
 * @s: string
 * Return: Copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
