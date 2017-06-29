#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits that you would need to get from one
 *             to another
 * @n: one number to compare
 * @m: the other number to compare
 * Return: number of bits that don't match
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips;
	unsigned int i, count = 0;

	flips = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (!(flips == ((flips >> 1) << 1)))
			count++;
		flips = flips >> 1;
	}
	return (count);
}
