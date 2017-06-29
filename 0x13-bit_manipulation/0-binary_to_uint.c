#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary string to unsigned int
 * @b: constant char string representing binary number
 * Return: unsigned int, result of conversion
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i;
	unsigned int len = 0;
	unsigned int atoi;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		atoi = b[i] - '0';
		sum = (sum << 1) | atoi;
	}
	return (sum);
}
