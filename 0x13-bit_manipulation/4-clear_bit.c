#include "holberton.h"

/**
 * clear_bit - set value of a bit to 0 at a a given index
 * @n: pointer to a number to be fiddled with
 * @index: index of postion of bit to be set to 0
 * Return: 1 on success, -1 on error
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n & (~(1 << index));
		return (1);
	}
	return (-1);
}
