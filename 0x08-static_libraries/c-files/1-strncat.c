#include "holberton.h"
/**
 * _strncat - appends n chars of of a string
 * @dest: pointer to a string that becomes appended to
 * @src: pointer to a string that is tacked on to dest
 * @n: int representing how many chars of src are to be appended
 * Return: pointer to string which is dest + n chars of src
 * appended to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp1, *tmp2;
	int i;

	tmp1 = dest;
	tmp2 = src;

	while (*dest != '\0')
		dest++;
	/* loop through src, til null or n chars  */
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = tmp1;
	src = tmp2;
	return (dest);
}
