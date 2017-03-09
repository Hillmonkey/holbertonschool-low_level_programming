#include "holberton.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes requested to be allocated
 * returns: pointer to allocated memory, or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return ptr;
}
