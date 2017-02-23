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
	/* edge cases??? */
	tmp1 = dest;
	tmp2 = src;
	/* wind out to end dest */
	while (*dest != '\0')
	{
		dest++;
	}
	/* peal off trailing null byte */

	/* loop through src */
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
		/* copy each char from src to the end of dest */
	/* ensure that terminating null byte exists */
	/* return pointer to dest */
}
