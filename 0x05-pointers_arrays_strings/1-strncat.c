#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a char (also functions as pointer to
 *    a string, which is an array of chars
 * Return: int representing the len of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *_strncat - appends first n chars of src string to dest string
 *@dest: a pointer to a string
 *@src: a pointer to another string
 *@n: int that indicates how man char from src string to append
 * Return: a pointer to resulting string, dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp1, *tmp2;
	/* edge cases??? */
	tmp1 = dest;
	tmp2 = src;
	int i;
	while (*dest != '\0')
		dest++;
	/* loop through src, til null or n chars  */
	while (*src != '\0' && i < n)
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
