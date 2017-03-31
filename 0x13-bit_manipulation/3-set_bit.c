#include "holberton.h"

/**
 * set_bit - set value of a bit to 1 at a a given index
 * @n: pointer to a number to be fiddled with
 * @index: index of postion of bit to be set to 1
 * Return: 1 if it worked, -1 on error
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		(*n) = *n | (1 << index);
		return (1);
	}
	return (-1);
}
