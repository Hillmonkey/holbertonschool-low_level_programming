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
	unsigned long int x;
	unsigned int i;
	unsigned int count = 0;

	x = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if(!(x == ((x >> 1) << 1)))
			count++;
		x = x >> 1;
	}
	/* printf("%u\n", count); */
	return (count);
}
