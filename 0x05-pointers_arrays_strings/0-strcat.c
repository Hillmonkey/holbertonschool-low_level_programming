#include "holberton.h"

/**
 *_strcat - appends src string to dest string
 *@dest: a pointer to a string
 *@src: a pointer to another string
 * Return: a pointer to resulting string, dest
 */
char *_strcat(char *dest, char *src)
{
	char *tmp1, *tmp2;
	tmp1 = dest;
	tmp2 = src;
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = tmp1;
	src = tmp2;
	return (dest);
}
