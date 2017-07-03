#include "holberton.h"

/**
 * get_bit - return value of bit at given index
 * @n: search this number for a particular bit
 * @index: index starting from 0 of the bit you want
 * Return: value of bit at index, or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int UL_size;

	UL_size  = 8 * (sizeof(unsigned long int));

	if (index > UL_size)
		return (-1);
	n = n >> index;
	return ((((n >> 1) << 1) == n) ? 0 : 1);
}
