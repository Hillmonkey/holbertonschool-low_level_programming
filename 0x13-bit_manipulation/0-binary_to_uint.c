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
	unsigned int sum = 0, i = 0;
	unsigned int power = 1;
	unsigned int len = 0;
	unsigned int atoi;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;

	for (i = len; i > 0; i--)
	{
		if (!(b[i - 1] == '0' || b[i - 1] == '1'))
			return (0);
		atoi = b[i - 1] - '0';
		sum += atoi * power;
		power *= 2;
	}
	return (sum);
}
